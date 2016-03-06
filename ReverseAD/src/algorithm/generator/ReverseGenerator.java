public class ReverseGenerator {
  public static final int ORDER = 2;
  public static final String PREFIX_UNARY = "generator_unary";
  public static final String[] UNARY_X = {"vx", "dx", "pxx", "pxxx"};
  public static final int[] kFactorial =
      {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
  public static final String[] BINARY_XY =
      {"dx", "dy", "pxx", "pxy", "pyy", "pxxx", "pxxy", "pxyy", "pyyy"};
  public static final int[] binary_order =
      {1, 1, 2, 2, 2, 3, 3, 3, 3};
  public static final int[] binary_x =
      {1, 0, 2, 1, 0, 3, 2, 1, 0};
  public static final int[] binary_y = 
      {0, 1, 0, 1, 2, 0, 1, 2, 3};
  public static final int BINARY_MAX_INDEX = 9;
  public int[] x_order;
  public int[] y_order;
  public int[] b_index;
  public int indent;
 
  public ReverseGenerator() {
    indent = 0;
  }

  public void dumpToFile(String line) {
    String sindent = "";
    for (int i = 0; i < indent; i++) {sindent += " ";}
    System.out.println(sindent+line);
  }
  public void generateUnarySingleCase(int max_level) {
    String multiSet = "";
    int n = 0;
    for (int i = 0; i <=max_level; i++) {n+=x_order[i];}
    int symmCoeff = kFactorial[n];
    for (int i = 0; i <=max_level; i++) {
      symmCoeff = symmCoeff / kFactorial[x_order[i]];
    }
    int count = 1;
    int l = 2;
    while (l <=max_level) {
      if (x_order[l] == x_order[l-1]) {
        count++;
      } else {
        symmCoeff /= kFactorial[count];
        count = 1;
      }
      l++;
    } 
    symmCoeff /= kFactorial[count];
    String weight = "w="+symmCoeff+".0*sw";
    int xTotal = 0;
    for (int i = 1; i <= max_level; i++) {
      weight = weight + "*ginfo." + UNARY_X[x_order[i]];
      xTotal += x_order[i];
    }
    weight += ";";
    multiSet = "D = Z; D.insert(x,"+xTotal+");";
    String update = "global_deriv.insert(D, w)";
    dumpToFile(multiSet);
    dumpToFile(weight);
    dumpToFile(update);
  }
  public void unaryRecursion(int curr_level, int max_level,
                             int prev_order,
                             int curr_order, int max_order) {
    if (curr_level > max_level) {
      generateUnarySingleCase(max_level);
      return;
    }
    for (int i = prev_order; i <= max_order - curr_order; i++) {
      x_order[curr_level] = i;
      unaryRecursion(curr_level+1, max_level, i, curr_order + i, max_order);
      x_order[curr_level] = 0;
    }
  }
  public void generateUnarySingleFunc(int d, int r, int xC) {
    // step 1, pick all unorder r combination from ginfo, order less than d
    // step 2, compute the symmetry coeff for this combination
    // step 3, generate code to perform this update

    // (TODO) Generate function head
    String funcName = "generator_unary_"+d+"_"+r+"_"+xC;
    System.out.println("Function name : " + funcName);
    String funcDecl = "void " + funcName +
        "(const ReverseADMultiSet& Z, double sw, " +
        "const GeneratorInfo<locint, double>& ginfo, " +
        "GenericDeriv<locint, double>& global_deriv) {";
    dumpToFile(funcDecl);
    indent += 2;
    dumpToFile("ReverseADMultiSet Z;");
    dumpToFile("double w;");
    x_order = new int[r+1];
    x_order[0] = xC;
    unaryRecursion(1, r, 1, 0, d);
    // (TODO) Generate function tail
    indent -= 2;
    dumpToFile("}");
    dumpToFile("");
  }

  public void generateUnary() {
    for (int i = 1; i <= ORDER; i++) {
      for (int r = 1; r <= i ; r++) {
        for (int x_count = 0; x_count < i; x_count++) {
          generateUnarySingleFunc(i, r, x_count);
        }
      }
    }
  }

  public void generateBinarySingleCase(int max_level) {
    String multiSet = "";
    int n = 0;
    int m = 0;
    for (int i = 0; i <=max_level; i++) {n+=x_order[i];m+=y_order[i];}
    int symmCoeff = kFactorial[n];
    for (int i = 0; i <=max_level; i++) {
      symmCoeff = symmCoeff / kFactorial[x_order[i]];
    }
    symmCoeff *= kFactorial[m];
    for (int i = 0; i <=max_level; i++) {
      symmCoeff = symmCoeff / kFactorial[y_order[i]];
    }
    int count = 1;
    int l = 2;
    while (l <=max_level) {
      if ((x_order[l] == x_order[l-1]) && (y_order[l] == y_order[l-1])) {
        count++;
      } else {
        symmCoeff /= kFactorial[count];
        count = 1;
      }
      l++;
    } 
    symmCoeff /= kFactorial[count];
    String weight = "w="+symmCoeff+".0*sw";
    int xTotal = 0;
    int yTotal = 0;
    for (int i = 1; i <= max_level; i++) {
      weight = weight + "*ginfo." + BINARY_XY[b_index[i]];
      xTotal += x_order[i];
      yTotal += y_order[i];
    }
    weight += ";";
    multiSet = "D = Z; D.insert(x,"+xTotal+"); D.insert(y,"+yTotal+");";
    String update = "global_deriv.insert(D, w)";
    dumpToFile(multiSet);
    dumpToFile(weight);
    dumpToFile(update);
  }

  public void binaryRecursion(int curr_level, int max_level,
                              int prev_index,
                              int curr_order, int max_order) {
    if (curr_level > max_level) {
      generateBinarySingleCase(max_level);
      return;
    }
    for (int i = prev_index; i < BINARY_MAX_INDEX; i++) {
      b_index[curr_level] = i;
      x_order[curr_level] = binary_x[i];
      y_order[curr_level] = binary_y[i];
      if (curr_order + binary_order[i] <= max_order) {
        binaryRecursion(curr_level+1, max_level, i,
                        curr_order+binary_order[i], max_order);
      }
      b_index[curr_level] = 0;
      x_order[curr_level] = 0;
      y_order[curr_level] = 0;
    }
  }
  public void generateBinarySingleFunc(int d, int r, int xC, int yC) {
    String funcName = "generator_binary_"+d+"_"+r+"_"+xC+"_"+yC;
    System.out.println("Function name : " + funcName);
    String funcDecl = "void " + funcName +
        "(const ReverseADMultiSet& Z, double sw, " +
        "const GeneratorInfo<locint, double>& ginfo, " +
        "GenericDeriv<locint, double>& global_deriv) {";
    dumpToFile(funcDecl);
    indent += 2;
    dumpToFile("ReverseADMultiSet Z;");
    dumpToFile("double w;");
    b_index = new int[r+1];
    x_order = new int[r+1];
    y_order = new int[r+1];
    x_order[0] = xC;
    y_order[0] = yC;
    binaryRecursion(1, r, 0, 0, d);
    // (TODO) Generate function tail
    indent -= 2;
    dumpToFile("}");
    dumpToFile("");
  }

  public void generateBinary() {
    for (int i = 1; i <= ORDER; i++) {
      for (int r = 1; r <= i; r++) {
        for (int x_count = 0; x_count < i; x_count++) {
          for (int y_count = 0; y_count < i; y_count++) {
            generateBinarySingleFunc(i, r, x_count, y_count);
          }
        }
      }
    }      
  }
  public void doWork() {
    generateUnary();
    generateBinary();
  }
  public static void main(String[] args) {
    System.out.printf("In ReverseGenerator.\n");
    new ReverseGenerator().doWork();
  }
}
