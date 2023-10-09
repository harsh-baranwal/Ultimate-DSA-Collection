#include<bits/stdc++.h>
using namespace std;

// Brute Force Apporach
int LargestElement(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

// Optimal Approach
int LargestElement2(vector<int>& arr, int n) {
    int large = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > large) {
            large = arr[i];
        }
    }
    return large;
}

int main() {
    vector<int> arr = {3, 5, 23, 54, 43, 1}; // Array of size 5
    cout << LargestElement2(arr, 5) << endl;
}