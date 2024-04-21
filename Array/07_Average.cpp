
#include <bits/stdc++.h>
using namespace std;
int Average(vector<int>arr)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
    }
    int average= sum/arr.size();
    return average;
}
int main()
{   int n ;
    cout<<"Enter value of n here : ";
    cin>>n;
    cout<<"Enter Array Elemnt : ";
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    cout<< " Average of Array Element is : "<<Average(arr);
    

    return 0;
}
