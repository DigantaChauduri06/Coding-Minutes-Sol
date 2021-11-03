#include<bits/stdc++.h>
using namespace std;
void space20(char *s) {
    int i = 0;
    int spaces = 0;
    while (i < strlen(s)) {
        if (s[i] == ' ') {
            spaces += 1;
        }
        i++;
    }
    int idx = 2*spaces + strlen(s);
    s[idx] = '\0';
    for (int i = strlen(s) - 1; i >= 0;i--) {
        if (s[i] == ' ') {
            //"%20"
            s[idx - 1] = '0';
            s[idx - 2] = '2';
            s[idx - 3] = '%';
            idx -= 3;
        }
        else {
            s[idx - 1] = s[i];
            idx--;
        }
    }
}
int main ()
{
    char s[10000];
    cin.getline(s,1000,'\n');
    space20(s);
    cout << s << endl;
    return 0;
}
