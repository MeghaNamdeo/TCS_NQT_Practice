
//brute force : using set 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        nums.clear();
       for(auto i:s)
       {
        nums.push_back(i);
       }
       
       return nums.size();
    }
};
/*
Time Complexity : O(nlogn)
Space complexity :O(n)
*/ 


//optimal approach  : 2 pointer approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j = 1;j < nums.size();j++)
        {
            if(nums[i]!=nums[j])
           {
            nums[i+1]=nums[j];
            i++;
        
           }
        }
      return i+1;
        
    }
};
/*
Time Complexity : O(n)
Space complexity : O(1)
*/