#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char inp[10000];
    cin.getline(inp, 1000);
    char *tokens = strtok(inp, " ");
    cout << tokens << endl;
    while (tokens != NULL)
    {
        tokens = strtok(NULL, " ");
        cout << tokens << " + ";
    }
    return 0;
}
