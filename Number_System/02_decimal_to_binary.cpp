void toBinary(int N)
{
    vector<int>ans;
    while(N!=0)
    {
      
       int rem = N%2;
       ans.push_back(rem);
       N = N/2;

    
    }
    reverse(ans.begin(),ans.end());
    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    
  
}