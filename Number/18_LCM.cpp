#include <bits/stdc++.h> 
int GCD(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}
long long LCM(int x, int y)
{
  /* Formula : LCM (a,b)=(a*b)/GCD(a,b) */
  long long  product = x*y;
  return product/GCD(x,y);

}
/*
*/