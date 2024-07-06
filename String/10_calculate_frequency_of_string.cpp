#include <bits/stdc++.h> 
vector<int> findFrequency(string S) {
	map<char,int>freq;
	vector<int>ans(26,0);
	for(char i ='a';i<='z';i++)
	{
		freq[i]=0;
	}
	for(int i =0;i<S.size();i++)

	{
		if(S[i]>='a'&&S[i]<='z')
		freq[S[i]]++;
	}
	/*
	freq['a' + i] uses the computed ASCII value to access the corresponding frequency count in the freq map. For example:
When i = 0, 'a' + 0 is 'a', so freq['a'] accesses the frequency of 'a'.
When i = 1, 'a' + 1 is 'b', so freq['b'] accesses the frequency of 'b'.
And so on, up to i = 25 where 'a' + 25 is 'z', so freq['z'] accesses the frequency of 'z'
*/
	for(int i=0;i<26;i++)
	{
		ans[i]=freq['a'+i];;
	}

	return ans;
}
/*
TC :O(n)
SC : O(1)
*/

//better sloution
#include <bits/stdc++.h> 
vector<int> findFrequency(string S) {
	unordered_map<char,int>freq;
	vector<int>ans;
	for(int i =0 ; i <S.size();i++)
	{
		char ch = S[i];
		if(ch>='a'&&ch<='z')
		freq[ch]++;
	}
	

	for(char ch='a';ch<='z';ch++)
	{
		ans.push_back(freq[ch]);
	}

	return ans;
}
/*
TC :O(n)
SC : O(1)
*/