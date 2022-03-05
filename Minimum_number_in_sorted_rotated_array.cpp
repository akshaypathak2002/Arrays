// In this we have to find minimum number in a sorted and rotated array for this we are goin to use binary search
#include <iostream>
using namespace std;
// One thing that we need to alway remember is that in rotated and sorted array there is one part of array that is always sorted
// And one poing is that only minimum element has greater element before it
int minimumEle(int arr[], int low, int high)
{
    int mid;
    int ans;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid - 1] > arr[mid] || mid == 0)
        {
            ans = mid;
            break;
        }
        if (arr[mid] > arr[0] && arr[0] > arr[high])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return arr[ans];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << minimumEle(arr, 0, n - 1) << endl;
    return 0;
}