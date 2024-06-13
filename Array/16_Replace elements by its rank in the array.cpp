class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       // Step 1: Create a copy of the original array
        vector<int>SortedArray=arr;

        // Step 2: Sort the copy of the array
       sort(SortedArray.begin(),SortedArray.end());
       // Step 3: Create a hashmap to store the rank of each element in the sorted array
       unordered_map<int,int>rankMap;
       int rank = 1;
       for (int i = 0; i < SortedArray.size(); ++i)
        {
          int num = SortedArray[i];
          if (rankMap.find(num) == rankMap.end()) 
          {
          rankMap[num] = rank++;
          }
        }
// Step 4: Iterate through the original array and store the rank of each element in a new array
       vector<int> result(arr.size());
      for (int i = 0; i < arr.size(); ++i) 
     {
         result[i] = rankMap[arr[i]];
     }
     return result;
    
    }
};
/*
the time complexity is O(n log n) and the space complexity is O(n).
*/