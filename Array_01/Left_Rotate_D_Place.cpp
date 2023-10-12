#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(int arr[], int n, int d) {
    d = d%n;

    int temp[d];
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for(int i = n-d; i < n; i++) {
        arr[i] = temp[i - (n-d)];
    }
}

int main() {
    int arr[] = {1, 1, 3, 4, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr, n, 3);

    for (auto i: arr) {
        cout << i << " ";
    }
}