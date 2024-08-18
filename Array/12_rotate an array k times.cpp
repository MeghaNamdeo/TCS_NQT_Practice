//Brute force 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         vector<int>temp(nums.size());
         for(int i=0;i<nums.size();i++)
         {
            temp[(i+k)%nums.size()]=nums[i];
         }
         nums=temp;
    }
};
/*

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        d=d%n;
       reverse(arr,arr+d);
       reverse(arr+d,arr+n);
       reverse(arr,arr+n);
    }
};
