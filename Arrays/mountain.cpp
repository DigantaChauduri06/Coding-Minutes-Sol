#include<bits/stdc++.h>
using namespace std;
int longestMountain(vector<int> &arr)
{
    if (arr.size() == 0)
        return 0;
    int i = 1;
    int maxEle = 0;
    for (; i < arr.size() - 1;) {   
        // find a peak
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
            int j = i;
            int cnt = 1;
            // right side of peak 
            while (i < arr.size()-1 and  arr[i] > arr[i + 1]) {
                cnt++;
                i++;
            }
            // left side of peak 
            while (j > 0 and arr[j] > arr[j - 1]) {
                cnt++;
                j--;
            }
            maxEle = max(maxEle, cnt);
        }
        else {
            i++;
        }
    }
    return maxEle;
}
int main ()
{

  return 0;
}
