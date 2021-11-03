#include<bits/stdc++.h>
using namespace std;
string stringUnique(string str) {
    if (str.empty())
        return "";
    int n = str.size();
    int cnt = 0;
    int maxCnt = 0;
    string ans = "";
    unordered_map<char, int> mpp;
    int i = 0;
    int j = 0;
    while (j < n) {
        if (mpp.find(str[j]) == mpp.end()) {
            cnt = j - i + 1;
            if (maxCnt < cnt) {
                maxCnt = cnt;
                ans = str.substr(i, maxCnt);
            } 
            mpp.insert(pair<int, int>{str[j], j});
            j++;
        }
        else {
            mpp.erase(str[i]);
            i++;
        }
    }
    return ans;
}
int main ()
{
    string ans = stringUnique("aabcb");
    cout << ans << endl;
    return 0;
}
