#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int>&arr)
{
   int start = 0;
   int end = arr.size()-1;
   
   while(start<=end)
   {
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n;i++)
    {
        cin>>arr[i];
        
    }
    cout<<"Reverse array  : ";
    Reverse(arr);
    
     for(int i = 0 ; i < n;i++)
    {
       cout<<arr[i]<<" ";
        
    }
}
