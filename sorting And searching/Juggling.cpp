#include<bits/stdc++.h>
using namespace std;
vector<int> sortBalls(vector<int> balls)
{
    //sort the balls in place in a single pass (O(N) time, O(1) space)
    int n = balls.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while (mid <= high) {
        int num = balls[mid];
        switch (num) {
            case 0:
                swap(balls[low++], balls[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(balls[mid], balls[high--]);
                break;
            default:
                continue;
        }
    }

    return balls;
}
int main ()
{

  return 0;
}
