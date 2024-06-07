//brute force approach 
class Solution{
  public:
    void customSort(int arr[], int n) {
        int mid = n / 2;
        vector<int>ans;
        sort(arr,arr+n);
        for(int i=0;i<mid;i++)
        {
            ans.push_back(arr[i]);
        }
        for(int i=n-1;i>=mid;i--)
        {
           ans.push_back(arr[i]) ;
        }
        for(int i = 0 ; i < ans.size();i++)
        {
            arr[i]=ans[i];
        }
    }
};


//optimal solution : using custom operator 
class Solution{
  public:
    static bool com(int a , int b)
    {
        return a>b;
    }
    void customSort(int arr[], int n) {
      sort(arr,arr+n/2);
      sort(arr+n/2,arr+n,com);
    }
};
