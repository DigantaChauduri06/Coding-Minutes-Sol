#include<bits/stdc++.h>
using namespace std;
// After partition the pivot ele is in its correct position
int partition(vector<int> &arr,int s, int e) {
    int pivotEle = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivotEle) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}
void quickSort(vector<int> &arr,int s,int e) {
    if (s<= e)
        return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main ()
{

  return 0;
}
