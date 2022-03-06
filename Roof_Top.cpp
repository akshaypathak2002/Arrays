/*We are given height
 of consecutive building
 we have to find maximum number
 of consecutive steps so we can gain increasee
 in altitude with each step*/
#include <iostream>
#include <algorithm>
using namespace std;

int maxStep(int A[], int N)
{
    int count = 0;
    int ans = 0;
    // In this we are going to use kaden's algo
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] < A[i + 1])
        {
            count++;
            ans = max(ans, count);
        }
        else
        {
            count = 0;
        }
    }
    return ans;
}
int main()
{
    int n; // for the size on array
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxStep(arr, n) << endl;
    return 0;
}