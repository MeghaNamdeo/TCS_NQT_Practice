//using inbuilt function 
#include <bits/stdc++.h> 
vector<int> countVowelsConsonantsSpaces(string &s, int n) {
   string vowel= "aioueAIOUE";
  
   int v=0,c=0,sp=0;
   vector<int>ans(3,0);
   for(int i=0;i<n;i++)
   {
       char ch = s[i];
       if(vowel.find(ch)!=string::npos)
       {
           v++;
       }
       else if (ch == ' ') 
       {
           sp++;
       }
       else{
           c++;
       }
       ans[0]=v;
       ans[1]=c;   
       ans[2]=sp;

   }
   return ans;
}/*
 TC :O(n) 
 SC :O(1)
 */
Sample Input 1 :
2
25
Take u forward is Awesome
27
India won the cricket match
Sample Output 1 :
10 11 4
8 15 4