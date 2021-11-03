#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    unordered_set<int> st;
    for (auto &it : nums)
    {
        st.insert(it);
    }
    int cnt = 0;
    int maxCnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (st.find(nums[i]-1) == st.end())
        {
            int f = nums[i];
            while (st.find(f++) != st.end())
            {
                cnt++;
            }
        }
        maxCnt = max(maxCnt, cnt);
        cnt = 0;
    }
    return maxCnt;
}
int main()
{

    return 0;
}
