#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(vector<int> &arr) {
    if (arr.size() == 0)
        return 0;
    int maxSum = 0;
    int curr_sum = 0;
    for (auto it : arr) {
        curr_sum +=  it;
        maxSum = max(maxSum, curr_sum);
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return maxSum;
}
int main ()
{

  return 0;
}
