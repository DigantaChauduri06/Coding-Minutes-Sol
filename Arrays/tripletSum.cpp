#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> tripletSum(vector<int> &res, int target)
{
  if (res.size() < 0)
    return {};
  std::sort(res.begin(), res.end());
  vector<vector<int>> ans;
  for (int i = 0; i <= res.size() - 3; i++)
  {
    int j = i + 1;
    int ei = res.size() - 1;
    while (j < ei)
    {
      int curr_sum = res[j] + res[ei] + res[i];
      if (curr_sum == target)
      {
        ans.push_back({res[i], res[j], res[ei]});
        j++;
        ei--;
      }
      else if (curr_sum < target)
      {
        j++;
      }
      else
      {
        ei--;
      }
    }
  }
  return ans;
}
int main()
{
  vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
  int s = 18;
  auto res = tripletSum(arr, s);
  for (auto it : res)
  {
    for (auto x : it)
    {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}
