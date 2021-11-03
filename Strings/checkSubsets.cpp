#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    if (s.size() > t.size())
        return false;
    int i = 0;
    int j = 0;
    int cnt = 0;
    while (i < s.size() and j < t.size()) {
        if (s[i] == t[j]) {
            i += 1;
            j += 1;
            cnt += 1;
        }
        else {
            j++;
        }
    }
    return cnt == s.size();
}
int main ()
{

  return 0;
}
/*
coding minuts
cines

*/