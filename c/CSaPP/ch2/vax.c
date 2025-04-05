// bis = bit set --> setting z to 1 at positions where m is 1
// bic = bit clear --> setting z to 0 at positions where m is 1
// both take data word x and a mask word m, generate result z

/* Declarations of functions implementing operations bis and bic */
   int bis(int x, int m);
   int bic(int x, int m);

   /* Compute x|y using only calls to functions bis and bic */
   int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
   }
   /* Compute x^y using only calls to functions bis and bic */
   int bool_xor(int x, int y) {
    int result = bis(bic(x,y), bic(y,x));
    return result;
   }

   // bic is equivalent to X AND NOT(m)