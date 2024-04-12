#include<bits/stdc++.h>
using namespace std;
int Largest_element(vector<int>&arr)
{
    int maxi = INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(maxi<arr[i])
        maxi = arr[i];
    }

    return maxi;
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n;i++)
    {
        cin>>arr[i];
        
    }
    cout<<"Largest Number : "<<Largest_element(arr);
}