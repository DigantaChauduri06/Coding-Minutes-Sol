#include<bits/stdc++.h>
using namespace std;
pair<int, int> search(int m, int n, vector<vector<int>> v, int k)
{
    //write your code here.
    int R = 0;
    int C = n - 1;
    while (R <= m - 1 and C >= 0) {
        if (v[R][C] == k) {
            return make_pair(R,C);
        }
        else if (v[R][C] < k) {
            //TODO: Do something
            R++;
        }
        else {
            //TODO: Do Something
            C--;
        }
    }
    return make_pair(-1,-1);
}
int main ()
{
    vector<vector<int>> a = { { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 60 } };
    int m = a.size();
    int n = a[0].size();
    auto ans = search(m, n, a, 23);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}
