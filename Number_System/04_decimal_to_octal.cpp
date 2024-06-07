#include <bits/stdc++.h> 
using namespace std;

long long decimalToOctal(int x) {
    vector<int> ans;
    while (x != 0) {
        int rem = x % 8;
        ans.push_back(rem);
        x = x / 8;
    }
    reverse(ans.begin(), ans.end());
    long long octalNumber = 0;
    for (int digit : ans) {
        octalNumber = octalNumber * 10 + digit;
    }
    return octalNumber;
}
