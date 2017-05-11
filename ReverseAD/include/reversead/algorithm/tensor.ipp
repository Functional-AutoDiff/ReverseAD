template <typename Base>
void generator_unary (size_t case_code, const TensorIndex<locint>& Z, const Base& sw, const TensorDerivativeInfo<locint, Base>& ginfo, TensorDeriv<locint, Base>& global_deriv) {
  TensorIndex<locint> D;
  Base w;
  switch (case_code) {
    case 1010000 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=1.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 1010100 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=2.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 1010200 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=3.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 1010300 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=4.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 1010400 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=5.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 1010500 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=6.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 2010000 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=1.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 2010100 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=2.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 2010200 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=3.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=6.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 2010300 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=4.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=10.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 2010400 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=5.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=15.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 2020000 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 2020100 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 2020200 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=6.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 2020300 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=10.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 2020400 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=15.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 3010000 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=1.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3010100 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=2.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=4.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3010200 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=3.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=6.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=10.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3010300 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=4.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=10.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=20.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3020000 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=3.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3020100 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=12.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3020200 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=6.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=30.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3020300 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=10.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=60.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 3030000 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 3030100 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=4.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 3030200 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=10.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 3030300 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=20.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 4010000 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=1.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=1.0*sw*ginfo.pxxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4010100 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=2.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=4.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=5.0*sw*ginfo.pxxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4010200 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=3.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=6.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=10.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=15.0*sw*ginfo.pxxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4020000 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=3.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=4.0*sw*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=3.0*sw*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4020100 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=12.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=20.0*sw*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=15.0*sw*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4020200 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=6.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=30.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=60.0*sw*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=45.0*sw*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4030000 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=6.0*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4030100 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=4.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=30.0*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4030200 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=10.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=90.0*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 4040000 : 
      {
        D = Z; D.insert(ginfo.x,4);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 4040100 : 
      {
        D = Z; D.insert(ginfo.x,4);
        w=5.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 4040200 : 
      {
        D = Z; D.insert(ginfo.x,4);
        w=15.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 5010000 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=1.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=1.0*sw*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=1.0*sw*ginfo.pxxxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5010100 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=2.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=4.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=5.0*sw*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=6.0*sw*ginfo.pxxxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5020000 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=3.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=4.0*sw*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=5.0*sw*ginfo.dx*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=3.0*sw*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=10.0*sw*ginfo.pxx*ginfo.pxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5020100 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=3.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=12.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=20.0*sw*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=30.0*sw*ginfo.dx*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=15.0*sw*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=60.0*sw*ginfo.pxx*ginfo.pxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5030000 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=6.0*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=10.0*sw*ginfo.dx*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=15.0*sw*ginfo.dx*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5030100 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=4.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=30.0*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=60.0*sw*ginfo.dx*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=90.0*sw*ginfo.dx*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5040000 : 
      {
        D = Z; D.insert(ginfo.x,4);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=10.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5040100 : 
      {
        D = Z; D.insert(ginfo.x,4);
        w=5.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=60.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 5050000 : 
      {
        D = Z; D.insert(ginfo.x,5);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 5050100 : 
      {
        D = Z; D.insert(ginfo.x,5);
        w=6.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    case 6010000 : 
      {
        D = Z; D.insert(ginfo.x,1);
        w=1.0*sw*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=1.0*sw*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=1.0*sw*ginfo.pxxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=1.0*sw*ginfo.pxxxxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 6020000 : 
      {
        D = Z; D.insert(ginfo.x,2);
        w=1.0*sw*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,3);
        w=3.0*sw*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=4.0*sw*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=5.0*sw*ginfo.dx*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=6.0*sw*ginfo.dx*ginfo.pxxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=3.0*sw*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=10.0*sw*ginfo.pxx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=15.0*sw*ginfo.pxx*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=10.0*sw*ginfo.pxxx*ginfo.pxxx;
        global_deriv.increase(D, w);
      }
      break;
    case 6030000 : 
      {
        D = Z; D.insert(ginfo.x,3);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,4);
        w=6.0*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=10.0*sw*ginfo.dx*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=15.0*sw*ginfo.dx*ginfo.dx*ginfo.pxxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=15.0*sw*ginfo.dx*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=60.0*sw*ginfo.dx*ginfo.pxx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=15.0*sw*ginfo.pxx*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 6040000 : 
      {
        D = Z; D.insert(ginfo.x,4);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,5);
        w=10.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=20.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxxx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=45.0*sw*ginfo.dx*ginfo.dx*ginfo.pxx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 6050000 : 
      {
        D = Z; D.insert(ginfo.x,5);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
        D = Z; D.insert(ginfo.x,6);
        w=15.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxx;
        global_deriv.increase(D, w);
      }
      break;
    case 6060000 : 
      {
        D = Z; D.insert(ginfo.x,6);
        w=1.0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
        global_deriv.increase(D, w);
      }
      break;
    default:
      std::cout << "unrecongized case code = " << case_code << std::endl;
  }
}

template <typename Base>
void generator_binary (size_t case_code, size_t minor, const TensorIndex<locint>& Z, const Base& sw, const TensorDerivativeInfo<locint, Base>& ginfo, TensorDeriv<locint, Base>& global_deriv) {
  TensorIndex<locint> D;
  Base w;
  Base w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18,w19,w20,w21,w22,w23,w24,w25,w26,w27,w28,w29,w30,w31,w32,w33,w34,w35,w36,w37,w38,w39,w40,w41,w42,w43,w44,w45,w46,w47,w48,w49,w50,w51,w52,w53,w54,w55,w56,w57,w58,w59,w60,w61,w62,w63,w64,w65,w66,w67,w68,w69,w70,w71,w72,w73,w74,w75,w76,w77,w78,w79,w80,w81,w82,w83,w84,w85,w86,w87,w88,w89,w90,w91,w92,w93,w94,w95,w96,w97,w98,w99;
  switch (case_code) {
    case 1010000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;
            break;
        case 2:
            w0=1.0;w1=3.0;
            break;
        case 3:
            w0=1.0;w1=4.0;
            break;
        case 4:
            w0=1.0;w1=5.0;
            break;
        case 5:
            w0=1.0;w1=6.0;
            break;
        case 100:
            w0=2.0;w1=1.0;
            break;
        case 101:
            w0=2.0;w1=2.0;
            break;
        case 102:
            w0=2.0;w1=3.0;
            break;
        case 103:
            w0=2.0;w1=4.0;
            break;
        case 104:
            w0=2.0;w1=5.0;
            break;
        case 200:
            w0=3.0;w1=1.0;
            break;
        case 201:
            w0=3.0;w1=2.0;
            break;
        case 202:
            w0=3.0;w1=3.0;
            break;
        case 203:
            w0=3.0;w1=4.0;
            break;
        case 300:
            w0=4.0;w1=1.0;
            break;
        case 301:
            w0=4.0;w1=2.0;
            break;
        case 302:
            w0=4.0;w1=3.0;
            break;
        case 400:
            w0=5.0;w1=1.0;
            break;
        case 401:
            w0=5.0;w1=2.0;
            break;
        case 500:
            w0=6.0;w1=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dy;
      global_deriv.increase(D, w);

      break;
    case 2010000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=1.0;w3=2.0;w4=3.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=1.0;w3=3.0;w4=6.0;
            break;
        case 3:
            w0=1.0;w1=4.0;w2=1.0;w3=4.0;w4=10.0;
            break;
        case 4:
            w0=1.0;w1=5.0;w2=1.0;w3=5.0;w4=15.0;
            break;
        case 100:
            w0=2.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;
            break;
        case 101:
            w0=2.0;w1=2.0;w2=3.0;w3=4.0;w4=3.0;
            break;
        case 102:
            w0=2.0;w1=3.0;w2=3.0;w3=6.0;w4=6.0;
            break;
        case 103:
            w0=2.0;w1=4.0;w2=3.0;w3=8.0;w4=10.0;
            break;
        case 200:
            w0=3.0;w1=1.0;w2=6.0;w3=3.0;w4=1.0;
            break;
        case 201:
            w0=3.0;w1=2.0;w2=6.0;w3=6.0;w4=3.0;
            break;
        case 202:
            w0=3.0;w1=3.0;w2=6.0;w3=9.0;w4=6.0;
            break;
        case 300:
            w0=4.0;w1=1.0;w2=10.0;w3=4.0;w4=1.0;
            break;
        case 301:
            w0=4.0;w1=2.0;w2=10.0;w3=8.0;w4=3.0;
            break;
        case 400:
            w0=5.0;w1=1.0;w2=15.0;w3=5.0;w4=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 2020000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=3.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=6.0;
            break;
        case 3:
            w0=1.0;w1=4.0;w2=10.0;
            break;
        case 4:
            w0=1.0;w1=5.0;w2=15.0;
            break;
        case 100:
            w0=3.0;w1=2.0;w2=1.0;
            break;
        case 101:
            w0=3.0;w1=4.0;w2=3.0;
            break;
        case 102:
            w0=3.0;w1=6.0;w2=6.0;
            break;
        case 103:
            w0=3.0;w1=8.0;w2=10.0;
            break;
        case 200:
            w0=6.0;w1=3.0;w2=1.0;
            break;
        case 201:
            w0=6.0;w1=6.0;w2=3.0;
            break;
        case 202:
            w0=6.0;w1=9.0;w2=6.0;
            break;
        case 300:
            w0=10.0;w1=4.0;w2=1.0;
            break;
        case 301:
            w0=10.0;w1=8.0;w2=3.0;
            break;
        case 400:
            w0=15.0;w1=5.0;w2=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w2*sw*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);

      break;
    case 3010000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;w5=1.0;w6=1.0;w7=1.0;w8=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=1.0;w3=2.0;w4=3.0;w5=1.0;w6=2.0;w7=3.0;w8=4.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=1.0;w3=3.0;w4=6.0;w5=1.0;w6=3.0;w7=6.0;w8=10.0;
            break;
        case 3:
            w0=1.0;w1=4.0;w2=1.0;w3=4.0;w4=10.0;w5=1.0;w6=4.0;w7=10.0;w8=20.0;
            break;
        case 100:
            w0=2.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;w5=4.0;w6=3.0;w7=2.0;w8=1.0;
            break;
        case 101:
            w0=2.0;w1=2.0;w2=3.0;w3=4.0;w4=3.0;w5=4.0;w6=6.0;w7=6.0;w8=4.0;
            break;
        case 102:
            w0=2.0;w1=3.0;w2=3.0;w3=6.0;w4=6.0;w5=4.0;w6=9.0;w7=12.0;w8=10.0;
            break;
        case 200:
            w0=3.0;w1=1.0;w2=6.0;w3=3.0;w4=1.0;w5=10.0;w6=6.0;w7=3.0;w8=1.0;
            break;
        case 201:
            w0=3.0;w1=2.0;w2=6.0;w3=6.0;w4=3.0;w5=10.0;w6=12.0;w7=9.0;w8=4.0;
            break;
        case 300:
            w0=4.0;w1=1.0;w2=10.0;w3=4.0;w4=1.0;w5=20.0;w6=10.0;w7=4.0;w8=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.pyyy;
      global_deriv.increase(D, w);

      break;
    case 3020000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;w5=1.0;w6=1.0;w7=2.0;w8=3.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=3.0;w3=4.0;w4=3.0;w5=3.0;w6=2.0;w7=6.0;w8=12.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=3.0;w3=6.0;w4=6.0;w5=6.0;w6=3.0;w7=12.0;w8=30.0;
            break;
        case 3:
            w0=1.0;w1=4.0;w2=3.0;w3=8.0;w4=10.0;w5=10.0;w6=4.0;w7=20.0;w8=60.0;
            break;
        case 100:
            w0=3.0;w1=2.0;w2=12.0;w3=6.0;w4=2.0;w5=1.0;w6=3.0;w7=4.0;w8=3.0;
            break;
        case 101:
            w0=3.0;w1=4.0;w2=12.0;w3=12.0;w4=6.0;w5=3.0;w6=6.0;w7=12.0;w8=12.0;
            break;
        case 102:
            w0=3.0;w1=6.0;w2=12.0;w3=18.0;w4=12.0;w5=6.0;w6=9.0;w7=24.0;w8=30.0;
            break;
        case 200:
            w0=6.0;w1=3.0;w2=30.0;w3=12.0;w4=3.0;w5=1.0;w6=6.0;w7=6.0;w8=3.0;
            break;
        case 201:
            w0=6.0;w1=6.0;w2=30.0;w3=24.0;w4=9.0;w5=3.0;w6=12.0;w7=18.0;w8=12.0;
            break;
        case 300:
            w0=10.0;w1=4.0;w2=60.0;w3=20.0;w4=4.0;w5=1.0;w6=10.0;w7=8.0;w8=3.0;
            break;
      }
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w5*sw*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 3030000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=3.0;w3=4.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=6.0;w3=10.0;
            break;
        case 3:
            w0=1.0;w1=4.0;w2=10.0;w3=20.0;
            break;
        case 100:
            w0=4.0;w1=3.0;w2=2.0;w3=1.0;
            break;
        case 101:
            w0=4.0;w1=6.0;w2=6.0;w3=4.0;
            break;
        case 102:
            w0=4.0;w1=9.0;w2=12.0;w3=10.0;
            break;
        case 200:
            w0=10.0;w1=6.0;w2=3.0;w3=1.0;
            break;
        case 201:
            w0=10.0;w1=12.0;w2=9.0;w3=4.0;
            break;
        case 300:
            w0=20.0;w1=10.0;w2=4.0;w3=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w2*sw*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w3*sw*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);

      break;
    case 4010000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;w5=1.0;w6=1.0;w7=1.0;w8=1.0;w9=1.0;w10=1.0;w11=1.0;w12=1.0;w13=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=1.0;w3=2.0;w4=3.0;w5=1.0;w6=2.0;w7=3.0;w8=4.0;w9=1.0;w10=2.0;w11=3.0;w12=4.0;w13=5.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=1.0;w3=3.0;w4=6.0;w5=1.0;w6=3.0;w7=6.0;w8=10.0;w9=1.0;w10=3.0;w11=6.0;w12=10.0;w13=15.0;
            break;
        case 100:
            w0=2.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;w5=4.0;w6=3.0;w7=2.0;w8=1.0;w9=5.0;w10=4.0;w11=3.0;w12=2.0;w13=1.0;
            break;
        case 101:
            w0=2.0;w1=2.0;w2=3.0;w3=4.0;w4=3.0;w5=4.0;w6=6.0;w7=6.0;w8=4.0;w9=5.0;w10=8.0;w11=9.0;w12=8.0;w13=5.0;
            break;
        case 200:
            w0=3.0;w1=1.0;w2=6.0;w3=3.0;w4=1.0;w5=10.0;w6=6.0;w7=3.0;w8=1.0;w9=15.0;w10=10.0;w11=6.0;w12=3.0;w13=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w9*sw*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.pyyyy;
      global_deriv.increase(D, w);

      break;
    case 4020000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;w5=4.0;w6=3.0;w7=2.0;w8=1.0;w9=1.0;w10=1.0;w11=2.0;w12=3.0;w13=1.0;w14=2.0;w15=3.0;w16=4.0;w17=3.0;w18=3.0;w19=1.0;w20=2.0;w21=3.0;w22=3.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=3.0;w3=4.0;w4=3.0;w5=4.0;w6=6.0;w7=6.0;w8=4.0;w9=3.0;w10=2.0;w11=6.0;w12=12.0;w13=2.0;w14=6.0;w15=12.0;w16=20.0;w17=3.0;w18=6.0;w19=3.0;w20=6.0;w21=12.0;w22=15.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=3.0;w3=6.0;w4=6.0;w5=4.0;w6=9.0;w7=12.0;w8=10.0;w9=6.0;w10=3.0;w11=12.0;w12=30.0;w13=3.0;w14=12.0;w15=30.0;w16=60.0;w17=3.0;w18=9.0;w19=6.0;w20=12.0;w21=30.0;w22=45.0;
            break;
        case 100:
            w0=3.0;w1=2.0;w2=12.0;w3=6.0;w4=2.0;w5=20.0;w6=12.0;w7=6.0;w8=2.0;w9=1.0;w10=3.0;w11=4.0;w12=3.0;w13=4.0;w14=6.0;w15=6.0;w16=4.0;w17=15.0;w18=12.0;w19=3.0;w20=6.0;w21=6.0;w22=3.0;
            break;
        case 101:
            w0=3.0;w1=4.0;w2=12.0;w3=12.0;w4=6.0;w5=20.0;w6=24.0;w7=18.0;w8=8.0;w9=3.0;w10=6.0;w11=12.0;w12=12.0;w13=8.0;w14=18.0;w15=24.0;w16=20.0;w17=15.0;w18=24.0;w19=9.0;w20=18.0;w21=24.0;w22=15.0;
            break;
        case 200:
            w0=6.0;w1=3.0;w2=30.0;w3=12.0;w4=3.0;w5=60.0;w6=30.0;w7=12.0;w8=3.0;w9=1.0;w10=6.0;w11=6.0;w12=3.0;w13=10.0;w14=12.0;w15=9.0;w16=4.0;w17=45.0;w18=30.0;w19=6.0;w20=12.0;w21=9.0;w22=3.0;
            break;
      }
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.dx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w9*sw*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w13*sw*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w14*sw*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w15*sw*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w16*sw*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w17*sw*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w18*sw*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w19*sw*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w20*sw*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w21*sw*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w22*sw*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 4030000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=6.0;w3=3.0;w4=1.0;w5=1.0;w6=3.0;w7=4.0;w8=3.0;w9=1.0;w10=1.0;w11=3.0;w12=6.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=6.0;w3=6.0;w4=3.0;w5=3.0;w6=6.0;w7=12.0;w8=12.0;w9=4.0;w10=3.0;w11=12.0;w12=30.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=6.0;w3=9.0;w4=6.0;w5=6.0;w6=9.0;w7=24.0;w8=30.0;w9=10.0;w10=6.0;w11=30.0;w12=90.0;
            break;
        case 100:
            w0=4.0;w1=3.0;w2=30.0;w3=12.0;w4=3.0;w5=2.0;w6=12.0;w7=12.0;w8=6.0;w9=1.0;w10=3.0;w11=6.0;w12=6.0;
            break;
        case 101:
            w0=4.0;w1=6.0;w2=30.0;w3=24.0;w4=9.0;w5=6.0;w6=24.0;w7=36.0;w8=24.0;w9=4.0;w10=9.0;w11=24.0;w12=30.0;
            break;
        case 200:
            w0=10.0;w1=6.0;w2=90.0;w3=30.0;w4=6.0;w5=3.0;w6=30.0;w7=24.0;w8=9.0;w9=1.0;w10=6.0;w11=9.0;w12=6.0;
            break;
      }
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w5*sw*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w9*sw*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w10*sw*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w11*sw*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w12*sw*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 4040000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=3.0;w3=4.0;w4=5.0;
            break;
        case 2:
            w0=1.0;w1=3.0;w2=6.0;w3=10.0;w4=15.0;
            break;
        case 100:
            w0=5.0;w1=4.0;w2=3.0;w3=2.0;w4=1.0;
            break;
        case 101:
            w0=5.0;w1=8.0;w2=9.0;w3=8.0;w4=5.0;
            break;
        case 200:
            w0=15.0;w1=10.0;w2=6.0;w3=3.0;w4=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w3*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w4*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);

      break;
    case 5010000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;w5=1.0;w6=1.0;w7=1.0;w8=1.0;w9=1.0;w10=1.0;w11=1.0;w12=1.0;w13=1.0;w14=1.0;w15=1.0;w16=1.0;w17=1.0;w18=1.0;w19=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=1.0;w3=2.0;w4=3.0;w5=1.0;w6=2.0;w7=3.0;w8=4.0;w9=1.0;w10=2.0;w11=3.0;w12=4.0;w13=5.0;w14=1.0;w15=2.0;w16=3.0;w17=4.0;w18=5.0;w19=6.0;
            break;
        case 100:
            w0=2.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;w5=4.0;w6=3.0;w7=2.0;w8=1.0;w9=5.0;w10=4.0;w11=3.0;w12=2.0;w13=1.0;w14=6.0;w15=5.0;w16=4.0;w17=3.0;w18=2.0;w19=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w9*sw*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w14*sw*ginfo.pxxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w15*sw*ginfo.pxxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w16*sw*ginfo.pxxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w17*sw*ginfo.pxxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w18*sw*ginfo.pxyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w19*sw*ginfo.pyyyyy;
      global_deriv.increase(D, w);

      break;
    case 5020000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;w5=4.0;w6=3.0;w7=2.0;w8=1.0;w9=5.0;w10=4.0;w11=3.0;w12=2.0;w13=1.0;w14=1.0;w15=1.0;w16=2.0;w17=3.0;w18=1.0;w19=2.0;w20=3.0;w21=4.0;w22=1.0;w23=2.0;w24=3.0;w25=4.0;w26=5.0;w27=3.0;w28=3.0;w29=1.0;w30=10.0;w31=6.0;w32=3.0;w33=1.0;w34=2.0;w35=3.0;w36=4.0;w37=6.0;w38=6.0;w39=4.0;w40=3.0;w41=1.0;w42=3.0;w43=6.0;w44=10.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=3.0;w3=4.0;w4=3.0;w5=4.0;w6=6.0;w7=6.0;w8=4.0;w9=5.0;w10=8.0;w11=9.0;w12=8.0;w13=5.0;w14=3.0;w15=2.0;w16=6.0;w17=12.0;w18=2.0;w19=6.0;w20=12.0;w21=20.0;w22=2.0;w23=6.0;w24=12.0;w25=20.0;w26=30.0;w27=3.0;w28=6.0;w29=3.0;w30=10.0;w31=12.0;w32=9.0;w33=4.0;w34=6.0;w35=12.0;w36=8.0;w37=18.0;w38=24.0;w39=20.0;w40=15.0;w41=3.0;w42=12.0;w43=30.0;w44=60.0;
            break;
        case 100:
            w0=3.0;w1=2.0;w2=12.0;w3=6.0;w4=2.0;w5=20.0;w6=12.0;w7=6.0;w8=2.0;w9=30.0;w10=20.0;w11=12.0;w12=6.0;w13=2.0;w14=1.0;w15=3.0;w16=4.0;w17=3.0;w18=4.0;w19=6.0;w20=6.0;w21=4.0;w22=5.0;w23=8.0;w24=9.0;w25=8.0;w26=5.0;w27=15.0;w28=12.0;w29=3.0;w30=60.0;w31=30.0;w32=12.0;w33=3.0;w34=6.0;w35=6.0;w36=20.0;w37=24.0;w38=18.0;w39=8.0;w40=3.0;w41=4.0;w42=9.0;w43=12.0;w44=10.0;
            break;
      }
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.dx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w9*sw*ginfo.dx*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.dx*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.dx*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.dx*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.dx*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w14*sw*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w15*sw*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w16*sw*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w17*sw*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w18*sw*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w19*sw*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w20*sw*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w21*sw*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w22*sw*ginfo.dy*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w23*sw*ginfo.dy*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w24*sw*ginfo.dy*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w25*sw*ginfo.dy*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w26*sw*ginfo.dy*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w27*sw*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w28*sw*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w29*sw*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w30*sw*ginfo.pxx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w31*sw*ginfo.pxx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w32*sw*ginfo.pxx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w33*sw*ginfo.pxx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w34*sw*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w35*sw*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w36*sw*ginfo.pxy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w37*sw*ginfo.pxy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w38*sw*ginfo.pxy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w39*sw*ginfo.pxy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w40*sw*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w41*sw*ginfo.pyy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w42*sw*ginfo.pyy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w43*sw*ginfo.pyy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w44*sw*ginfo.pyy*ginfo.pyyy;
      global_deriv.increase(D, w);

      break;
    case 5030000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=6.0;w3=3.0;w4=1.0;w5=10.0;w6=6.0;w7=3.0;w8=1.0;w9=1.0;w10=3.0;w11=4.0;w12=3.0;w13=4.0;w14=6.0;w15=6.0;w16=4.0;w17=15.0;w18=12.0;w19=3.0;w20=6.0;w21=6.0;w22=3.0;w23=1.0;w24=1.0;w25=3.0;w26=6.0;w27=1.0;w28=3.0;w29=6.0;w30=10.0;w31=3.0;w32=6.0;w33=3.0;w34=6.0;w35=12.0;w36=15.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=6.0;w3=6.0;w4=3.0;w5=10.0;w6=12.0;w7=9.0;w8=4.0;w9=3.0;w10=6.0;w11=12.0;w12=12.0;w13=8.0;w14=18.0;w15=24.0;w16=20.0;w17=15.0;w18=24.0;w19=9.0;w20=18.0;w21=24.0;w22=15.0;w23=4.0;w24=3.0;w25=12.0;w26=30.0;w27=3.0;w28=12.0;w29=30.0;w30=60.0;w31=6.0;w32=18.0;w33=12.0;w34=24.0;w35=60.0;w36=90.0;
            break;
        case 100:
            w0=4.0;w1=3.0;w2=30.0;w3=12.0;w4=3.0;w5=60.0;w6=30.0;w7=12.0;w8=3.0;w9=2.0;w10=12.0;w11=12.0;w12=6.0;w13=20.0;w14=24.0;w15=18.0;w16=8.0;w17=90.0;w18=60.0;w19=12.0;w20=24.0;w21=18.0;w22=6.0;w23=1.0;w24=3.0;w25=6.0;w26=6.0;w27=4.0;w28=9.0;w29=12.0;w30=10.0;w31=15.0;w32=24.0;w33=9.0;w34=18.0;w35=24.0;w36=15.0;
            break;
      }
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.dx*ginfo.dx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.dx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.dx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.dx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w9*sw*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.dx*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.dx*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.dx*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w13*sw*ginfo.dx*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w14*sw*ginfo.dx*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w15*sw*ginfo.dx*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w16*sw*ginfo.dx*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w17*sw*ginfo.dx*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w18*sw*ginfo.dx*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w19*sw*ginfo.dx*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w20*sw*ginfo.dx*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w21*sw*ginfo.dx*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w22*sw*ginfo.dx*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w23*sw*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w24*sw*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w25*sw*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w26*sw*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w27*sw*ginfo.dy*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w28*sw*ginfo.dy*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w29*sw*ginfo.dy*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w30*sw*ginfo.dy*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w31*sw*ginfo.dy*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w32*sw*ginfo.dy*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w33*sw*ginfo.dy*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w34*sw*ginfo.dy*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w35*sw*ginfo.dy*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w36*sw*ginfo.dy*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 5040000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=10.0;w3=4.0;w4=1.0;w5=1.0;w6=6.0;w7=6.0;w8=3.0;w9=1.0;w10=3.0;w11=6.0;w12=6.0;w13=1.0;w14=1.0;w15=4.0;w16=10.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=10.0;w3=8.0;w4=3.0;w5=3.0;w6=12.0;w7=18.0;w8=12.0;w9=4.0;w10=9.0;w11=24.0;w12=30.0;w13=5.0;w14=4.0;w15=20.0;w16=60.0;
            break;
        case 100:
            w0=5.0;w1=4.0;w2=60.0;w3=20.0;w4=4.0;w5=3.0;w6=30.0;w7=24.0;w8=9.0;w9=2.0;w10=12.0;w11=18.0;w12=12.0;w13=1.0;w14=3.0;w15=8.0;w16=10.0;
            break;
      }
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w5*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w9*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w10*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w11*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w12*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w14*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w15*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w16*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 5050000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;w5=1.0;
            break;
        case 1:
            w0=1.0;w1=2.0;w2=3.0;w3=4.0;w4=5.0;w5=6.0;
            break;
        case 100:
            w0=6.0;w1=5.0;w2=4.0;w3=3.0;w4=2.0;w5=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w4*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w5*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);

      break;
    case 6010000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;w5=1.0;w6=1.0;w7=1.0;w8=1.0;w9=1.0;w10=1.0;w11=1.0;w12=1.0;w13=1.0;w14=1.0;w15=1.0;w16=1.0;w17=1.0;w18=1.0;w19=1.0;w20=1.0;w21=1.0;w22=1.0;w23=1.0;w24=1.0;w25=1.0;w26=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w9*sw*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w14*sw*ginfo.pxxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w15*sw*ginfo.pxxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w16*sw*ginfo.pxxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w17*sw*ginfo.pxxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w18*sw*ginfo.pxyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w19*sw*ginfo.pyyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w20*sw*ginfo.pxxxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w21*sw*ginfo.pxxxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w22*sw*ginfo.pxxxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w23*sw*ginfo.pxxxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w24*sw*ginfo.pxxyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w25*sw*ginfo.pxyyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w26*sw*ginfo.pyyyyyy;
      global_deriv.increase(D, w);

      break;
    case 6020000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=3.0;w3=2.0;w4=1.0;w5=4.0;w6=3.0;w7=2.0;w8=1.0;w9=5.0;w10=4.0;w11=3.0;w12=2.0;w13=1.0;w14=6.0;w15=5.0;w16=4.0;w17=3.0;w18=2.0;w19=1.0;w20=1.0;w21=1.0;w22=2.0;w23=3.0;w24=1.0;w25=2.0;w26=3.0;w27=4.0;w28=1.0;w29=2.0;w30=3.0;w31=4.0;w32=5.0;w33=1.0;w34=2.0;w35=3.0;w36=4.0;w37=5.0;w38=6.0;w39=3.0;w40=3.0;w41=1.0;w42=10.0;w43=6.0;w44=3.0;w45=1.0;w46=15.0;w47=10.0;w48=6.0;w49=3.0;w50=1.0;w51=2.0;w52=3.0;w53=4.0;w54=6.0;w55=6.0;w56=4.0;w57=5.0;w58=8.0;w59=9.0;w60=8.0;w61=5.0;w62=3.0;w63=1.0;w64=3.0;w65=6.0;w66=10.0;w67=1.0;w68=3.0;w69=6.0;w70=10.0;w71=15.0;w72=10.0;w73=10.0;w74=4.0;w75=1.0;w76=6.0;w77=9.0;w78=4.0;w79=6.0;w80=10.0;w81=10.0;
            break;
      }
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.dx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w9*sw*ginfo.dx*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.dx*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.dx*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.dx*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.dx*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w14*sw*ginfo.dx*ginfo.pxxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w15*sw*ginfo.dx*ginfo.pxxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w16*sw*ginfo.dx*ginfo.pxxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w17*sw*ginfo.dx*ginfo.pxxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w18*sw*ginfo.dx*ginfo.pxyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w19*sw*ginfo.dx*ginfo.pyyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,2);
      w=w20*sw*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w21*sw*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w22*sw*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w23*sw*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w24*sw*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w25*sw*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w26*sw*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w27*sw*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w28*sw*ginfo.dy*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w29*sw*ginfo.dy*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w30*sw*ginfo.dy*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w31*sw*ginfo.dy*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w32*sw*ginfo.dy*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w33*sw*ginfo.dy*ginfo.pxxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w34*sw*ginfo.dy*ginfo.pxxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w35*sw*ginfo.dy*ginfo.pxxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w36*sw*ginfo.dy*ginfo.pxxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w37*sw*ginfo.dy*ginfo.pxyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w38*sw*ginfo.dy*ginfo.pyyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w39*sw*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w40*sw*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w41*sw*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w42*sw*ginfo.pxx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w43*sw*ginfo.pxx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w44*sw*ginfo.pxx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w45*sw*ginfo.pxx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w46*sw*ginfo.pxx*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w47*sw*ginfo.pxx*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w48*sw*ginfo.pxx*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w49*sw*ginfo.pxx*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w50*sw*ginfo.pxx*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w51*sw*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w52*sw*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w53*sw*ginfo.pxy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w54*sw*ginfo.pxy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w55*sw*ginfo.pxy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w56*sw*ginfo.pxy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w57*sw*ginfo.pxy*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w58*sw*ginfo.pxy*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w59*sw*ginfo.pxy*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w60*sw*ginfo.pxy*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w61*sw*ginfo.pxy*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w62*sw*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w63*sw*ginfo.pyy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w64*sw*ginfo.pyy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w65*sw*ginfo.pyy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w66*sw*ginfo.pyy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w67*sw*ginfo.pyy*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w68*sw*ginfo.pyy*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w69*sw*ginfo.pyy*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w70*sw*ginfo.pyy*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w71*sw*ginfo.pyy*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w72*sw*ginfo.pxxx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w73*sw*ginfo.pxxx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w74*sw*ginfo.pxxx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w75*sw*ginfo.pxxx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w76*sw*ginfo.pxxy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w77*sw*ginfo.pxxy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w78*sw*ginfo.pxxy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w79*sw*ginfo.pxyy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w80*sw*ginfo.pxyy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w81*sw*ginfo.pyyy*ginfo.pyyy;
      global_deriv.increase(D, w);

      break;
    case 6030000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=6.0;w3=3.0;w4=1.0;w5=10.0;w6=6.0;w7=3.0;w8=1.0;w9=15.0;w10=10.0;w11=6.0;w12=3.0;w13=1.0;w14=1.0;w15=3.0;w16=4.0;w17=3.0;w18=4.0;w19=6.0;w20=6.0;w21=4.0;w22=5.0;w23=8.0;w24=9.0;w25=8.0;w26=5.0;w27=15.0;w28=12.0;w29=3.0;w30=60.0;w31=30.0;w32=12.0;w33=3.0;w34=6.0;w35=6.0;w36=20.0;w37=24.0;w38=18.0;w39=8.0;w40=3.0;w41=4.0;w42=9.0;w43=12.0;w44=10.0;w45=1.0;w46=1.0;w47=3.0;w48=6.0;w49=1.0;w50=3.0;w51=6.0;w52=10.0;w53=1.0;w54=3.0;w55=6.0;w56=10.0;w57=15.0;w58=3.0;w59=6.0;w60=3.0;w61=10.0;w62=12.0;w63=9.0;w64=4.0;w65=6.0;w66=12.0;w67=8.0;w68=18.0;w69=24.0;w70=20.0;w71=15.0;w72=3.0;w73=12.0;w74=30.0;w75=60.0;w76=15.0;w77=15.0;w78=3.0;w79=12.0;w80=9.0;w81=3.0;w82=6.0;w83=12.0;w84=15.0;w85=15.0;
            break;
      }
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.dx*ginfo.dx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.dx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.dx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.dx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w9*sw*ginfo.dx*ginfo.dx*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.dx*ginfo.dx*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.dx*ginfo.dx*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.dx*ginfo.dx*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.dx*ginfo.dx*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,2);
      w=w14*sw*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w15*sw*ginfo.dx*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w16*sw*ginfo.dx*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w17*sw*ginfo.dx*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w18*sw*ginfo.dx*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w19*sw*ginfo.dx*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w20*sw*ginfo.dx*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w21*sw*ginfo.dx*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w22*sw*ginfo.dx*ginfo.dy*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w23*sw*ginfo.dx*ginfo.dy*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w24*sw*ginfo.dx*ginfo.dy*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w25*sw*ginfo.dx*ginfo.dy*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w26*sw*ginfo.dx*ginfo.dy*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w27*sw*ginfo.dx*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w28*sw*ginfo.dx*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w29*sw*ginfo.dx*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w30*sw*ginfo.dx*ginfo.pxx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w31*sw*ginfo.dx*ginfo.pxx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w32*sw*ginfo.dx*ginfo.pxx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w33*sw*ginfo.dx*ginfo.pxx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w34*sw*ginfo.dx*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w35*sw*ginfo.dx*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w36*sw*ginfo.dx*ginfo.pxy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w37*sw*ginfo.dx*ginfo.pxy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w38*sw*ginfo.dx*ginfo.pxy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w39*sw*ginfo.dx*ginfo.pxy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w40*sw*ginfo.dx*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w41*sw*ginfo.dx*ginfo.pyy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w42*sw*ginfo.dx*ginfo.pyy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w43*sw*ginfo.dx*ginfo.pyy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w44*sw*ginfo.dx*ginfo.pyy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,3);
      w=w45*sw*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w46*sw*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w47*sw*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w48*sw*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w49*sw*ginfo.dy*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w50*sw*ginfo.dy*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w51*sw*ginfo.dy*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w52*sw*ginfo.dy*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w53*sw*ginfo.dy*ginfo.dy*ginfo.pxxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w54*sw*ginfo.dy*ginfo.dy*ginfo.pxxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w55*sw*ginfo.dy*ginfo.dy*ginfo.pxxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w56*sw*ginfo.dy*ginfo.dy*ginfo.pxyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w57*sw*ginfo.dy*ginfo.dy*ginfo.pyyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w58*sw*ginfo.dy*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w59*sw*ginfo.dy*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w60*sw*ginfo.dy*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w61*sw*ginfo.dy*ginfo.pxx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w62*sw*ginfo.dy*ginfo.pxx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w63*sw*ginfo.dy*ginfo.pxx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w64*sw*ginfo.dy*ginfo.pxx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w65*sw*ginfo.dy*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w66*sw*ginfo.dy*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w67*sw*ginfo.dy*ginfo.pxy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w68*sw*ginfo.dy*ginfo.pxy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w69*sw*ginfo.dy*ginfo.pxy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w70*sw*ginfo.dy*ginfo.pxy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w71*sw*ginfo.dy*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w72*sw*ginfo.dy*ginfo.pyy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w73*sw*ginfo.dy*ginfo.pyy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w74*sw*ginfo.dy*ginfo.pyy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w75*sw*ginfo.dy*ginfo.pyy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w76*sw*ginfo.pxx*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w77*sw*ginfo.pxx*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w78*sw*ginfo.pxx*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w79*sw*ginfo.pxx*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w80*sw*ginfo.pxx*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w81*sw*ginfo.pxx*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w82*sw*ginfo.pxy*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w83*sw*ginfo.pxy*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w84*sw*ginfo.pxy*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w85*sw*ginfo.pyy*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 6040000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=10.0;w3=4.0;w4=1.0;w5=20.0;w6=10.0;w7=4.0;w8=1.0;w9=1.0;w10=6.0;w11=6.0;w12=3.0;w13=10.0;w14=12.0;w15=9.0;w16=4.0;w17=45.0;w18=30.0;w19=6.0;w20=12.0;w21=9.0;w22=3.0;w23=1.0;w24=3.0;w25=6.0;w26=6.0;w27=4.0;w28=9.0;w29=12.0;w30=10.0;w31=15.0;w32=24.0;w33=9.0;w34=18.0;w35=24.0;w36=15.0;w37=1.0;w38=1.0;w39=4.0;w40=10.0;w41=1.0;w42=4.0;w43=10.0;w44=20.0;w45=3.0;w46=9.0;w47=6.0;w48=12.0;w49=30.0;w50=45.0;
            break;
      }
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w5*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,2);
      w=w9*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w10*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w11*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w12*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w13*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w14*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w15*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w16*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w17*sw*ginfo.dx*ginfo.dx*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w18*sw*ginfo.dx*ginfo.dx*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w19*sw*ginfo.dx*ginfo.dx*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w20*sw*ginfo.dx*ginfo.dx*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w21*sw*ginfo.dx*ginfo.dx*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w22*sw*ginfo.dx*ginfo.dx*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,3);
      w=w23*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w24*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w25*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w26*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w27*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w28*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w29*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w30*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w31*sw*ginfo.dx*ginfo.dy*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w32*sw*ginfo.dx*ginfo.dy*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w33*sw*ginfo.dx*ginfo.dy*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w34*sw*ginfo.dx*ginfo.dy*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w35*sw*ginfo.dx*ginfo.dy*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w36*sw*ginfo.dx*ginfo.dy*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,4);
      w=w37*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w38*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w39*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w40*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w41*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w42*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w43*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w44*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pyyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w45*sw*ginfo.dy*ginfo.dy*ginfo.pxx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w46*sw*ginfo.dy*ginfo.dy*ginfo.pxx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w47*sw*ginfo.dy*ginfo.dy*ginfo.pxx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w48*sw*ginfo.dy*ginfo.dy*ginfo.pxy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w49*sw*ginfo.dy*ginfo.dy*ginfo.pxy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w50*sw*ginfo.dy*ginfo.dy*ginfo.pyy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 6050000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=15.0;w3=5.0;w4=1.0;w5=1.0;w6=10.0;w7=8.0;w8=3.0;w9=1.0;w10=6.0;w11=9.0;w12=6.0;w13=1.0;w14=3.0;w15=8.0;w16=10.0;w17=1.0;w18=1.0;w19=5.0;w20=15.0;
            break;
      }
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w4*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,2);
      w=w5*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w6*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w7*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w8*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,3);
      w=w9*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w10*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w11*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w12*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,4);
      w=w13*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w14*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w15*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w16*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,5);
      w=w17*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w18*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w19*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pxy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w20*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.pyy;
      global_deriv.increase(D, w);

      break;
    case 6060000 :
      switch (minor) {
        case 0:
            w0=1.0;w1=1.0;w2=1.0;w3=1.0;w4=1.0;w5=1.0;w6=1.0;
            break;
      }
      D = Z; D.insert(ginfo.x,6); D.insert(ginfo.y,0);
      w=w0*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,5); D.insert(ginfo.y,1);
      w=w1*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,4); D.insert(ginfo.y,2);
      w=w2*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,3); D.insert(ginfo.y,3);
      w=w3*sw*ginfo.dx*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,2); D.insert(ginfo.y,4);
      w=w4*sw*ginfo.dx*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,1); D.insert(ginfo.y,5);
      w=w5*sw*ginfo.dx*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);
      D = Z; D.insert(ginfo.x,0); D.insert(ginfo.y,6);
      w=w6*sw*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy*ginfo.dy;
      global_deriv.increase(D, w);

      break;
    default:
      std::cout << "unrecongized case code = " << case_code << std::endl;
  }
}

