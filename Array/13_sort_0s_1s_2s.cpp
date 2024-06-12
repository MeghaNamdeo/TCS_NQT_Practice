
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

/*
Time complexity: O(N log N)
Space complexity: O(1)
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;
        vector<int>ans;

        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i]==0)
            count0++;

            else if(nums[i]==1)
            count1++;

            else
            count2++;
        }
        int j =0;
        while(j<count0)
        {
            ans.push_back(0);
            j++;
        }
        int k=0;
        while(k<count1)
        {
            ans.push_back(1);
            k++;
        }
        int l=0;
        while(l<count2)
        {
            ans.push_back(2);
            l++;
        }
        
        nums=ans;

        
    }
};

/*
Time complexity : O(N)
Space complexity : O(N)
*/