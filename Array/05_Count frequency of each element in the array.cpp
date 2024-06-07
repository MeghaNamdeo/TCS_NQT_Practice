/*using map*/
int findFrequency(vector<int> Arr, int X){
   unordered_map<int,int>freq;
   int ans;
   for(int i=0;i<Arr.size();i++)
   {
       freq[Arr[i]]++;
   }
   
   for(auto  i : freq)
   {
      if(i.first==X)
      ans=i.second;
   }
   return ans;
}
/* 
Time complexity : O(n)
Space complexity : O(n)
*/

//another method 
int findFrequency(vector<int> Arr, int X){
  
   int count=0;
   for(int i=0;i<Arr.size();i++)
   {
      if(Arr[i]==X)
      count++;
   }
   
   
   return count;
}
/* 
Time complexity : O(n)
Space complexity : O(1)
*/

