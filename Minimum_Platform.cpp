/*In this we have to mimimize
the Platform in which we are given arrving time and departure time of the train we have
to minimize the time */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findPlatform(vector<int> &arr, vector<int> &dep, int n)
{
    // We first sort the array
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 1;
    int j = 0;
    int ans = 1;
    while (i < n && j < n)
    {
        if (arr[i] > dep[j]) // If arriving time is greater than departur time then move pointer i and j
        {
            i++;
            j++;
        }
        else
        {
            // If arr[i]<=dep then increase i pointer
            // And also increase result
            ans++;
            i++;
        }
    }
    // As we are sorting the array and using merge like function
    // So its overall time complexity is O(n.logn)
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> dep;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        dep.push_back(temp);
    }
    cout << findPlatform(arr, dep, n) << endl;
    return 0;
}