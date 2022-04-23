// IN thie we have to count the elements that are less than or equal element in first array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int firstIndEle(vector<int> arr, int start, int end, int ele)
{
    int low = start;
    int high = end - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else if (arr[mid] == ele && arr[mid + 1] == ele)
        {
            // If arr[mid] is repeated  then increase low by mid+1
            low = mid + 1;
        }
        else if (arr[mid] == ele && arr[mid + 1] != ele)
        {
            return mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high + 1;
}
vector<int> countEleLessThanOrEqual(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    sort(arr2.begin(), arr2.end());
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        ans.push_back(firstIndEle(arr2, 0, n, arr1[i]));
    }
    return ans;
    // Its time complexity is O(N.logN)
    // Its time complexity is O(N)
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> A1;
    A1.reserve(n1);
    vector<int> A2;
    A2.reserve(n2);
    for (int i = 0; i < n1; i++)
    {
        int temp;
        cin >> temp;
        A1.push_back(temp);
    }
    for (int i = 0; i < n2; i++)
    {
        int temp;
        cin >> temp;
        A2.push_back(temp);
    }
    vector<int> ans = countEleLessThanOrEqual(A1, A2, n1, n2);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
    return 0;
}