#include <bits/stdc++.h> 
int countDigit(long long x) {
    long long count =0;
   while( x > 0)
   {
       long long Last_Digit= x % 10;
       count ++;
       x=x/10;
   }
   return count;
}
//or 

#include <bits/stdc++.h> 
int countDigit(long long x) {
    long long count =0;
   while( x > 0)
   {
       
       count ++;
       x=x/10;
   }
   return count;
}


Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined by the number of digits in the input integer N. In the worst case when N is a multiple of 10 the number of digits in N is log10N + 1.

In the while loop we divide N by 10 until it becomes 0 which takes log10N iterations.
In each iteration of the while loop we perform constant time operations like division and increment the counter.
Space Complexity : O(1) as only a constant amount of additional memory for the counter regardless of size of the input number.


//optimal 
#include <bits/stdc++.h> 
int countDigit(long long x) {
int count = (int)(log10(x)+1);
   return count;
}

TC : O(1);
SC : O(1);