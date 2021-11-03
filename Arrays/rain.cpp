#include<bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
    if (height.empty() or height.size() == 1)
        return 0;
    vector<int> leftArr;
    vector<int> rightArr;
    int lmax = height[0];
    int rmax = height[height.size() - 1];
    for (int i = 0; i < height.size(); i++)
    {
        lmax = max(height[i], lmax);
        leftArr.push_back(lmax);
    }
    for (int i = height.size() - 1; i >= 0; i--)
    {
        rmax = max(height[i], rmax);
        rightArr.push_back(rmax);
    }
    reverse(rightArr.begin(), rightArr.end());
    int sum = 0;
    for (int i = 0; i < height.size(); i++)
    {
        sum += (min(leftArr[i], rightArr[i]) - height[i]);
    }
    return sum;
}
int main ()
{

  return 0;
}
