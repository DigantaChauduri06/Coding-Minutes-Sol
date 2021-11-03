#include<bits/stdc++.h>
using namespace std;
void stringToken(vector<string> &tokens, string s) {
    if (s.empty())
        return;
    string str = "";
    for (int i = 0; i < s.size();) {
        while (s[i] != ' ' and i < s.size()) {
            str.push_back(s[i]);
            i++;
        }
        tokens.push_back(str);
        str.clear();
        i++;
    }
}
string normalize(const string &sentence)
{
    string copy = sentence;
    vector<string> tokens;
    stringToken(tokens, copy);
    copy.clear();
    for (int i = 0; i < tokens.size();i++) {
        transform(tokens[i].begin(), tokens[i].end(),tokens[i].begin() ,::tolower);
        tokens[i][0] = toupper(tokens[i][0]);
        copy.append(tokens[i] + ' ');
    }
    copy.pop_back();
    return copy;
}
int main ()
{
    string ans;
    ans = normalize(" this is SO Fun!");
    for (auto it : ans) {
        cout << it << "";
    }
    return 0;
}
