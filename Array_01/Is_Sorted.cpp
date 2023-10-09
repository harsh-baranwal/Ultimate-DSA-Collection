#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
bool IsSorted(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[i]) return false;
        }
    }
    return true;
}

// Optimal Approach
bool IsSorted2(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 4, 3, 6, 8, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << IsSorted2(arr, n) << endl;
}