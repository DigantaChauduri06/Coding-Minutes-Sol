#include<bits/stdc++.h>
using namespace std;
int searceSearch(vector<string> &arr,string key) {
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == "") {
            int i = mid + 1;
            int j = mid - 1;
            int cnt1 = 0;
            int cnt2 = 0;
            while (arr[i] == "" and i <= e) {
                cnt1++;
                i++;
            }
            while (arr[j] == "" and j >= 0) {
                cnt2++;
                j--;
            }
            if (cnt1 < cnt2) {
                mid = i;
            }
            else {
                mid = j;
            }
        }
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}
int main ()
{
    vector<string> arr{"ai", "", "", "", "bat", "", "", "", "car", "cat", "", "", "", "dog", ""};
    cout << searceSearch(arr, "ai");
    return 0;
}
