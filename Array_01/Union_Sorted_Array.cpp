#include<bits/stdc++.h>
using namespace std;

// Brute force approach
vector<int> unionArray(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> st;

    // Operation with arr1
    for(int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }

    // Operation with arr2
    for(int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    // Traversing set
    vector<int> unionArr;
    for(auto it: st) {
        unionArr.push_back(it);
    }

    return unionArr;
}

// Optimal Approach
vector<int> unionArray2(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0, j = 0;
    vector<int> unionArr;
    
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            if(unionArr.back() == 0 || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(unionArr.back() == 0 || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j < n2) {
        if(unionArr.back() == 0 || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
    }
    while(i < n1) {
        if(unionArr.back() == 0 || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
    }

    return unionArr;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 5};
    vector<int> arr2 = {1, 2, 4, 5, 6};
    vector<int> ans = unionArray2(arr, arr2);

    for (auto &i: ans) {
        cout << i << " ";
    }
}