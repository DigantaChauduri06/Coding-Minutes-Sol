#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
string smallestWindow(string str)
{
    //Complete this method
    if ((str.size() == 0))
        return "";
    unordered_set<char> st;
    for (auto it : str) {
        st.insert(it);
    }
    int n = st.size();
    int count = 0;
    int i = 0, j = 1; 
    unordered_map<char, int> mpp;
    mpp[str[i]]++;
    count++;
    int mi = INT_MAX;
    while (i <= j and j < str.size()){
        if (count < n) {
            if (mpp[str[j]] == 0)
                count++;
            mpp[str[j]]++;
            j++;
        }
        else if (count == n) {
            mi = min(mi, j - i);
            if (mpp[str[i]] == 1)
                count--;
            mpp[str[i]]--;
            i++;
        }
    }
    return str.substr(i-1, mi);
}
int main ()
{
    cout << smallestWindow("aabcbcdbcaaad");
    return 0;
}
