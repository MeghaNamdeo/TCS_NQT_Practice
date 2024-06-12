class Solution {
public:
    int getCount(string S, int N) {
        vector<char>ans;
        map<char, int> freq;
        for(int i = 0; i < S.length(); i++) {
            freq[S[i]]++;
        }
        for(auto i : freq)
        {
            if(i.second == N)
            {
                ans.push_back(i.first);
            }
        }
        return ans.size();
    }
};
/*
the time complexity is O(N + K)
and the space complexity is O(K), where 

N is the length of the input string and 

K is the number of distinct characters in the string.
*/