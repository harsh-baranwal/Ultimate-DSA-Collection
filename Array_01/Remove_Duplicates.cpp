#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
int removeDuplicates(int arr[], int n) {
    set<int> set;
    for(int i = 0; i < n; i++) set.insert(arr[i]);

    int k = set.size();
    int i = 0;
    for(auto it: set) {
        arr[i++] = it;
    }
    return k;
}

// Optimal Approach
int removeDuplicates(int arr[], int n) {
    int i = 0;
    for(int j = 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main() {
    int arr[] = {1, 1, 3, 4, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicates(arr, n);

    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
}