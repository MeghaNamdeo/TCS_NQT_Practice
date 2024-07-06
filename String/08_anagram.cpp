
//using map 
class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>freqs;
       unordered_map<char,int>freqt;
        for(int i =0 ; i < s.size();i++)
        {
            freqs[s[i]]++;
        }
        for(int i =0 ; i < t.size();i++)
        {
            freqt[t[i]]++;
        }
        return freqs==freqt;

        
    }
};
/*
TC : O(n)
SC : O(1)
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        
    }
};
/*
TC : O(nlogn)
SC : O(1)
*/