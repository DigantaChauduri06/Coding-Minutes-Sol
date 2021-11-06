#include<bits/stdc++.h>
using namespace std;
void mergeArr(vector<int> &nums, int si, int mid, int ei)
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
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
    }
    while (--k)
    {
        pq.pop();
    }
    return pq.top();
}

int main ()
{

  return 0;
}
