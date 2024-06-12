#include <bits/stdc++.h> 
using namespace std;

int partition(vector<int>& arr, int start, int end) {
    int pivotIndex = start;
    int pivotElement = arr[pivotIndex];
    int count = 0;

    for (int i = start; i <= end; i++) {
        if (arr[i] <= pivotElement) {
            count++;
        }
    }

    int rightPosition = count + start-1 ;
    swap(arr[pivotIndex], arr[rightPosition]);
    pivotIndex = rightPosition;

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivotElement) {
            i++;
        }
        while (arr[j] > pivotElement) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quick_sort(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int p = partition(arr, start, end);

    quick_sort(arr, start, p - 1);
    quick_sort(arr, p + 1, end);
}

vector<int> quickSort(vector<int>& arr) {
    int start = 0;
    int end = arr.size() -1;
    quick_sort(arr, start, end);
    return arr;
}

/*
Time Complexity: O(n log n) on average, O(n^2) in the worst case.
Space Complexity: O(log n) on average, O(n) in the worst case.

*/