#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> x, pair<int, int> y)
{
    return x.second < y.second;
}
int countActivites(vector<pair<int, int>> activities)
{
    //Complete this method
    if (activities.empty())
        return 0;
    sort(activities.begin(), activities.end(), comp);
    int cnt = 1;
    int firstEnd = activities[0].second;
    for (int i = 1; i < activities.size(); i++)
    {
        if (firstEnd <= activities[i].second)
            cnt += 1;
    }
    return cnt;
}
int main ()
{

  return 0;
}
