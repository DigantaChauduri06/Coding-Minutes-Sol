#include<bits/stdc++.h>
#include<queue>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &arr, int k)
{
    if (k > arr.size())
    {
        return {*max_element(arr.begin(), arr.end())};
    }
    int i = 0;
    int j = 0;
    vector<int> answer;
    deque<int> ls;
    while (j < arr.size())
    {
        while (ls.size() > 0 and ls.back() < arr[j])
        {
            ls.pop_back();
        }
        ls.push_back(arr[j]);
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            answer.push_back(ls.front());
            if (ls.front() == arr[i])
                ls.pop_front();
            i++;
            j++;
        }
    }
    return answer;
}
int main ()
{
    // vector<int> res = {1, 3, -1, -3, 5, 3, 6, 7};
    vector<int> res = {1, 3, -1, -3, -3, 3, 6, 7};
    vector<int> a = maxSlidingWindow(res, 3);
    for (auto &it : a)
    {
        cout << it << " ";
    }

    return 0;
}
