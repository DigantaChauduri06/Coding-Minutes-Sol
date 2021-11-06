// https : //www.geeksforgeeks.org/minimum-length-unsorted-subarray-sorting-which-makes-the-complete-array-sorted/
#include<bits/stdc++.h>
        using namespace std;
pair<int, int> subarraySorting(vector<int> a)
{
    //Expected Optimal Complexity O(n) Time, O(1) Space
    //may be start with O(NLogN) and try to improve
    //complete this function
    auto temp = a;
    sort(a.begin(), a.end());
    int mn = INT_MAX;
    int diff = 0;
    pair<int, int> ans(-1,-1);
    for (int i = 0; i < a.size();i++) {
        if (a[i] != temp[i]) {
            int j = i;
            while (a[i] != temp[i] and i < a.size()) {
                i++;
            }
            diff = i - j;
            if (mn > diff) {
                mn = diff;
                ans.first = j;
                ans.second = i;
            }
            
        }    
    }
    return ans;
}
int main ()
{
    auto ans = subarraySorting({0, 2, 4, 7, 10, 11, 7, 12, 13, 14, 16, 19, 29});
    cout << ans.first << " " << ans.second << endl;
    return 0;
}
