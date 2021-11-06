#include<bits/stdc++.h>
using namespace std;
bool comp(string s1,string s2) {
    return s1 + s2 < s1 + s2;
}
string sorting(string s) {
    sort(s.begin(), s.end(), comp);
    return s;
}
int main ()
{
    
  return 0;
}
  