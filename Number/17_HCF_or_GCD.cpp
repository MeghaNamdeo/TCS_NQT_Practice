//brute force 
int calcGCD(int n, int m){
   int gcd=1;
   for(int i=1;i<=min(n,m);i++)
   {
       if(n%i==0 && m%i==0)
       {
           gcd=i;
       }
   }
   return gcd;
}
/*
Time Complexity: O(min(n, m))
Space Complexity: O(1)

*/