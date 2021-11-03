#include<bits/stdc++.h>
using namespace std;
pair<int, int> minDifference(vector<int> a, vector<int> b)
{
    //Complete this method
    pair<int, int> ans;
    if (a.size() == 0 || b.size() == 0)
        return ans = make_pair(-1, -1);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int minDiff = INT_MAX;
    int i = 0, j = 0;
    while (i < a.size() and j < b.size())
    {
        int diff = abs(a[i] - b[j]);
        if (minDiff > diff)
        {
            minDiff = diff;
            ans = make_pair(a[i], b[j]);
        }
        if (a[i] <= b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main ()
{
    vector<int> a{23, 5, 10, 17, 30};
    vector<int> b{26, 134, 135, 14, 19};
    auto pr = minDifference(a, b);
    cout << pr.first << " " << pr.second << endl;
    return 0;
}
