#include <bits/stdc++.h>
using namespace std;

int Search(vector<int> arr, int x) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter Value of n here: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter Value of x here: ";
    cin >> x;

    cout << "Index: " << Search(arr, x);

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int Binary_Search(vector<int> &arr, int x) {
    int n = arr.size();
    
    int start = 0;
    int end = n - 1;
    int mid;
    
    while (start <= end) {
        mid = start + (end - start) / 2;
        
        if (arr[mid] == x) {
            return mid;
        }
        
        else if (arr[mid] < x) {
            start = mid + 1;
        }
        
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter Value of n here: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter Value of x here: ";
    cin >> x;

    cout << "Index: " << Binary_Search(arr, x) << endl;

    return 0;
}
