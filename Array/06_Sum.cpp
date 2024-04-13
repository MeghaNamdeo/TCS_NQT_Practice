
#include <bits/stdc++.h>
using namespace std;
int Sum(vector<int>arr)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
    }
    return sum;
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
    
    
    cout<< " Sum of Array Element is : "<<Sum(arr);
    

    return 0;
}
