#include<bits/stdc++.h>
using namespace std;

// Brute force approach
vector<int> moveZero(vector<int> arr, int n) {
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) temp.push_back(arr[i]);
    }

    int k = temp.size();
    for(int i = 0; i < k; i++) arr[i] = temp[i];

    for(int i = k; i < n; i++) arr[i] = 0;
    return arr;
}

// Optimal Approach
vector<int> moveZero2(vector<int> arr, int n) {
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) swap(arr[i], arr[j++]);
    }

    return arr;
}

int main() {
    vector<int> arr = {1, 0, 3, 2, 4, 0, 9, 0};
    int n = arr.size();
    vector<int> ans = moveZero2(arr, n);

    for (auto &i: ans) {
        cout << i << " ";
    }
}