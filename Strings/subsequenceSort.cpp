#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void generateSubseq(string s, string output,int i = 0)
{
    if (i == s.size()) {
        res.push_back(output);
        return;
    }
    generateSubseq(s.substr(1), output);
    generateSubseq(s.substr(1), output + s[0]);
}
//Len
bool comp (string a, string b) {
    return a.size() < b.size();
}
// Lexo
bool comp2(string a,string b) {
    return a < b;
}
void sortSubseq(string s,string choose) {
    generateSubseq(s, "");
    if (choose == "Lexo")
        sort(res.begin(), res.end(),comp2);
    else {
        sort(res.begin(), res.end(), comp);
    }
}
int main ()
{
    string choose;
    getline(cin, choose);
    sortSubseq("abczdv",choose);
    for (auto it : res) {
        cout << it << " ";
    }
  return 0;
}
