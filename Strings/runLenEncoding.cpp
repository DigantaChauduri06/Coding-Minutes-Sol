#include<bits/stdc++.h>
using namespace std;
string compressString(const string &str)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < str.size();i++)
    {
        mp[str[i]]++;
    }
    string ans = "";
    if (mp.size() == str.size())
        return str;
    for (int i = 0; i < str.size(); i++)
    {
        char letter = str[i];
        int j = i;
        while (i < str.size() and str[i + 1] == letter)
        {
            i++;
        }
        string word = letter + to_string(mp[letter]);
        ans.append(word);
        }
    return ans;
}
int main ()
{
    // string ans = compressString("bbbaaaadexxxxxx");
    string ans = compressString("abc");
    cout << ans << endl;
    return 0;
}
