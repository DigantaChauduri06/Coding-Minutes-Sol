#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            std::swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}
int quickSelect(vector<int> &arr, int k, int s, int e)
{
    int p = partition(arr, s, e);
    if (k == p)
    {
        return arr[p];
    }
    else if (k < p)
    {
        return quickSelect(arr, k, s, p - 1);
    }
    else
        return quickSelect(arr, k, p + 1, e);
}
int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int p = quickSelect(arr, 4, 0, arr.size());
    cout << p << endl;
    return 0;
}
// [10,5,2,0,7,6,4]
// 4th smallest element is 5