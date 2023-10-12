#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(int arr[], int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
    int arr[] = {1, 1, 3, 4, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr, n);

    for (auto i: arr) {
        cout << i << " ";
    }
}