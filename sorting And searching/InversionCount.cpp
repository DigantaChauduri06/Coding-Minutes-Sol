#include <bits/stdc++.h>
using namespace std;
int merge(vector<int> &arr, int s, int e) {
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    int count = 0;
    while (i <= m and j <= e) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i++]);
        }
        else {
            count += (m - i + 1);
            temp.push_back(arr[j++]);
        }
    }
    while (i <= m) {
        temp.push_back(arr[i++]);
    }
    while (j <= e) {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int i = s; i <= e; i++) {
        arr[i] = temp[k++];
    }
    return count;
}

int mergeSort(vector<int> &arr,int s, int e) {
    if (s >= e) {
        return 0;
    }
    int mid = (s + e) / 2;
    int c1 = mergeSort(arr, s, mid);
    int c2 = mergeSort(arr, mid + 1, e);
    int CI = merge(arr, s, e);
    return c1 + c2 + CI;
}
int inversionCount(vector<int> arr) {
    return mergeSort(arr, 0, arr.size() - 1);
}
int main()
{
    cout << inversionCount({0,5,2,3,1});
    return 0;
}
