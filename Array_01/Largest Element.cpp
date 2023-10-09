#include<bits/stdc++.h>
using namespace std;

// Brute Force Apporach
int LargestElement(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

int main() {
    vector<int> arr = {3, 5, 23, 54, 43, 1}; // Array of size 5
    cout << LargestElement(arr, 5) << endl;
}