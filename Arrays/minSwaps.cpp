#include <bits/stdc++.h>
using namespace std;
int countMinSwaps(vector<int> arr)
{
  int ans = 0;
  pair<int, int> *ap = new pair<int, int>[arr.size()];
  for (int i = 0; i < arr.size();i++) {
    ap[i].first = arr[i];
    ap[i].second = i;
  }
  sort(ap, ap + arr.size());
  
  // Like graph
  vector<bool> visited(arr.size(), false);
  for (int i = 0; i < arr.size();i++) {
    int oldPos = ap[i].second;
    //already visited or it is its correct position
    if (visited[i] or i == oldPos) {
      continue;
    }
    // first time :)
    else {
      int node = i;
      int cycle = 0;
      while (!visited[node]) {
        visited[node] = true;
        int nextNode = ap[node].second;
        node = nextNode;
        cycle += 1;
      }
      ans += (cycle - 1);
    }
  }
  return ans;
}
int main()
{

  return 0;
}
