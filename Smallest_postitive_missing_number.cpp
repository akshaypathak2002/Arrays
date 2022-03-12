// In this we have have to find the smallest positive missing element in the array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int smallestPosMissingNumber(vector<int> &arr, int n)
{
    int max_ele = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            arr[i] = 0;
        max_ele = max(max_ele, arr[i]);
    }
    vector<bool> appear(max_ele + 1, false);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            appear[arr[i]] = true;//Making that index true that element appear in array 
        }
    }
    for (int i = 1; i <= max_ele; i++)
    {
        if (appear[i] != true)
            return i; // To missing element
    }
    return max_ele + 1;
    // Its time complexity is O(N)
    // Its sapce complexitys is O(N)
}
int main()
{
    int n; // For the size of the array
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << smallestPosMissingNumber(arr, n) << endl;

    return 0;
}