#include<bits/stdc++.h>
using namespace std;
void mergeArr(vector<int> &nums,int si,int mid, int ei)
{
    vector<int> temp(ei - si + 1);
    int i = si;
    int j = mid + 1;
    int k = 0;
    while (i <= mid and j <= ei)
    {
        if (nums[i] < nums[j])
        {
            temp[k++] = nums[i++];
        }
        else
        {
            temp[k++] = nums[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = nums[i++];
    }
    while (j <= ei)
    {
        temp[k++] = nums[j++];
    }
    for (int i = 0; i < k; i++)
    {
        nums[si + i] = temp[i];
    }
    
}
void mergedSortedArray(vector<int> &nums,int si, int ei)
{
    if (si >= ei)
        return;
    int mid = (si + ei) / 2;
    mergedSortedArray(nums, si, mid);
    mergedSortedArray(nums, mid + 1, ei);
    mergeArr(nums, si, mid, ei);
}
vector<int> sortArray(vector<int> &nums)
{
    mergedSortedArray(nums, 0,nums.size()-1);
    return nums;
}
int main ()
{
    vector<int> nums = {5, 2, 3, 1};
    nums = sortArray(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}
