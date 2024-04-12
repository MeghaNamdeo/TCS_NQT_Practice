#include<bits/stdc++.h>
using namespace std;
int Smallest_element(vector<int>&arr)
{
    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        if(mini>arr[i])
        mini = arr[i];
    }

    return mini;
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n;i++)
    {
        cin>>arr[i];
        
    }
    cout<<"Smallest Number : "<<Smallest_element(arr);
}