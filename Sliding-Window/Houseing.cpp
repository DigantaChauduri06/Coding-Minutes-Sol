#include<bits/stdc++.h>
using namespace std;
void maxHouse(vector<int> houses,int target) {
    int curr = 0;
    int n = houses.size();
    int i = 0;
    int j = 0;
    while (j < n) {
        curr += houses[j];
        j++;
        while (i < j and curr > target) {
            curr -= houses[i];
            i++;
        }
        if (curr == target) {
            cout << i << "->" << j - 1 << endl;
        }
    }
}
int main ()
{
    vector<int> a = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2};
    maxHouse(a, 8);
    
    return 0;
}
