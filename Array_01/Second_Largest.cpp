#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
int SecondLargest(int arr[], int n) {
    sort(arr, arr+n);
    return arr[n-2];
}

// Optimal Approach
int SecondLargest2(int arr[], int n) {
    int large = arr[0];
    int slarge = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > large) {
            slarge = large;
            large = arr[i];
        }
        else if(arr[i] < large && arr[i] > slarge) {
            slarge = arr[i];
        }
    }
    return slarge;
}

int main() {
    int arr[7] = {3, 5, 23, 54, 43, 13, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << SecondLargest2(arr, n) << endl;
}