
//Roatte Array by right side 
class Solution {
  public:
    void rotate(vector<int> &arr) {
        int temp = arr[arr.size()-1];
        for(int i=arr.size()-1;i>=1;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
};//TC:O(n), SC:O(1)


//Rotate array by left 
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    
  int temp = arr[0];
  for(int i = 1; i < n ;i++)
  {
      arr[i-1]=arr[i];

  }

 
  arr[n-1]= temp;

return arr;
}
