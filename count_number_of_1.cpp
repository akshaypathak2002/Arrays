// To found the number 1's in binary array
#include <iostream>
#include <algorithm>
using namespace std;

int count1(int arr[], int n)
{
    // WE will find the last Index of 1 in the array and add 1 to it as array start from index 0
    int low = 0;
    int high = n - 1;
    int max_index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 1)
        {
            max_index = max(max_index, mid);
            low = mid + 1;
        }

        else
            high = mid - 1;
    }
    return max_index + 1;
}
int main()
{
    int n; // For the size of the array
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<count1(arr,n);
    return 0;
}