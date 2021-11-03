#include<bits/stdc++.h>
using namespace std;
int cntSubarrays(vector<int> arr, int k)
{
    //complete this method
    unordered_map<int,int> mpp;
    int currSum = 0;
    int res = 0;
    for (int i = 0; i < arr.size();i++) {
        currSum += arr[i];
        if (currSum == k)
            res++;
        if (mpp.find(currSum - k) != mpp.end()) {
            res += mpp[currSum - k];
        }
        mpp[currSum]++;
    }
    return res;
}
int main ()
{

  return 0;
}
