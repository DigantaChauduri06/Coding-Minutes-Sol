#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string str;
    getline(cin, str);
    stringstream ss(str);
    // >> and << operators
    string token;
    vector<string> tokens;
    while (getline(ss,token,' ')) {
        tokens.push_back(token);
    }
    for (auto it : tokens) {
        cout << it << endl;
    }
    
    
    return 0;
}
