#include "myMath.h"
#define e 2.71828

  double Pow(double x, int y){
    double sum = 1;
    if(y == 0){
      return 1;
    }
    else if(y > 0){
      for(int i = 0; i < y; i++){
        sum = sum * x;
      }
    }
    else{
      for(int i = 0; i > y; i--){
        sum = sum / x;
      }
    }
    return sum;
  }

  double Exp(int x) {
	   return Pow(e, x);
   }
