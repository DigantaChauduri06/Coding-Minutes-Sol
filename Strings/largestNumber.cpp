#include<bits/stdc++.h>
using namespace std;
vector<string> getStringArr(string &str) {
    vector<string> res;
    string token;
    stringstream ss(str);
    while (getline(ss,token,' ')) {
        res.push_back(token);
    }
    return res;
}

/*-----------------------*/

bool comp(string x, string y)
{
    return x + y > y + x;
}
string largestNumber(vector<int> &nums)
{
    vector<string> str;
    for (auto it : nums)
    {
        str.push_back(to_string(it));
    }
    sort(str.begin(), str.end(), comp);
    string res = "";
    for (auto it : str)
    {
        res += it;
    }
    return (res[0] == '0') ? "0" : res;
}
int main ()
{
    vector<int> nums{10, 2};
    string s = largestNumber(nums);
    // cout << s;
    return 0;
}
