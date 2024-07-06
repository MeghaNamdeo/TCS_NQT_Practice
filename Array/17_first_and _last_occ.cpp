class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long long first_occ=-1,last_occ = -1;
        //for first occcurence 
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==x)
            {
                first_occ=i;
                break;
            }
        }
        
        //for last occcurence 
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==x)
            {
               last_occ=i;
               
            }
        }
        return {first_occ,last_occ};
    }
};
/*
TC : O(n)
SC : O(1)
*/