#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
bool comp(pair<string, int> x, pair<string, int> y)
{
  return x.second < y.second;
}
//! Brute force
int badness2(vector<pair<string, int>> teams)
{
  //Complete this function to return the min badnes
  sort(teams.begin(), teams.end(), comp);
  int badness = 0;
  for (int i = 0; i < teams.size(); i++)
  {
    badness += abs((i + 1) - teams[i].second);
  }
  return badness;
}

int badness(vector<pair<string, int>> teams)
{
  //Complete this function to return the min badnes
  int badness = 0;
  vector<int> count(teams.size() + 1, 0);
  // creating a freq array on the basis of teams position
  for (int i = 0; i < teams.size(); i++)
  {
    count[teams[i].second]++;
  }
  int pos = 1;
  int sum = 0;
  for (int i = 1; i <= teams.size(); i++)
  {
    
  }
  

  return badness;
}
int main()
{
  
  return 0;
}
