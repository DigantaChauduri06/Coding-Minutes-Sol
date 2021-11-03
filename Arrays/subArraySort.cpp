#include<bits/stdc++.h>
using namespace std;
// O(NLOGN)
pair<int,int> subArraySort(vector<int> &arr) {
    if (arr.empty())
        return make_pair(-1, -1);
    auto aux = arr;
    sort(aux.begin(), aux.end());
    int st = -1;
    int ed = -1;
    int i = 0;
    for (i; i < aux.size();i++) {
        if (aux[i] != arr[i])
            break;
    }
    st = i;
    if ( st == arr.size())
        return make_pair(-1, -1);
    int j = arr.size() - 1;
    for (j; j > i;j--) {
        if (aux[j] != arr[j])
            break;
    }
    ed = j;
    return make_pair(st, ed);
}
// O(N)
int rightPos(vector<int> res,int ele) {
    if (ele < res[0])
        return 0;
    int pos = res.size() - 1;
    for (int i = 1; i < res.size() - 1;i++) {
        if (ele > res[i - 1] and ele < res[i + 1]) {
            pos = i;
            return pos;
        }
    }
    return pos;
}
pair<int,int> subArraySortOptimal(vector<int> &arr) {
    if (arr.empty())
        return make_pair(-1, -1);
    int st = -1, ed = -1;
    for (int i = 0;i <= arr.size() - 2;i++) {
        if (arr[i] > arr[i + 1]) {
            st = i;
            break;
        }
    }
    for (int i = arr.size() - 1; i > 0;i--) {
        if (arr[i] < arr[i - 1]) {
            ed = i;
            break;
        }
    }
    int firstEle = arr[st];
    int lastEle = arr[ed];
    int firstPos = rightPos(arr, lastEle) != 0 ? rightPos(arr, lastEle) + 1 : rightPos(arr, lastEle);
    int lastPos = rightPos(arr, firstEle);
    if (firstEle > arr.size() and firstEle == lastEle)
        return make_pair(-1, -1);
    return make_pair(firstPos, lastPos);
}
int main ()
{
    vector<int> arr{1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    sort(arr.begin(), arr.end());
    auto ans = subArraySortOptimal(arr);
    cout << ans.first << " " << ans.second;
    return 0;
}
