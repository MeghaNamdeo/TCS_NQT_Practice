class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int>ans;
        sort(arr,arr+n);
        for(int i=0; i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                ans.push_back(arr[i]);
            }
            
           
            
        }
        if(ans.empty())
        {
            ans.push_back(-1);
        }
        
        set<int>ans2;
        for(auto i : ans)
        {
            ans2.insert(i);
        }
        
        return vector<int>(ans2.begin(), ans2.end());
    }
    
};
