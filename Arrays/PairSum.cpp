#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
bool PairSum(vector<int> &arr, int targetSum)
{
    unordered_set<int> mpp;
    for (int num : arr)
    {
        int compliment = targetSum - num;
        if (mpp.find(compliment) != mpp.end())
        {
            return true;
        }
        mpp.insert(num);
    }
    return false;
}
vector<int> PairSumReturn(vector<int> &arr, int targetSum)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        int compliment = targetSum - arr[i];
        if (mpp.find(compliment) != mpp.end())
        {
            return {i, mpp[compliment]};
        }
        mpp[arr[i]] = i;
    }
    return {};
}
int main ()
{

  return 0;
}
