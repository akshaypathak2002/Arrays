/* In this we have to count the special that means
    we are given a number k and sizeof_array and we have to first find the floor
    and count how many elements have frequency equal to floor */
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int countTheSpecials(vector<int> &arr, int sizeof_array, int k)
{
    int f = floor(sizeof_array / k);
    int ans = 0;
    int count = 1;
    sort(arr.begin(), arr.end());
    for (int i = 1; i < sizeof_array; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else if (count == f)
        {
            ans++;
            count = 1;
        }
        else
        {
            count = 1;
        }
    }
    // For last element frequency
    if (count == f)
    {
        ans++;
    }
    // Its time compleixty is O(n.logn) as we are using sorting 
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << countTheSpecials(arr, n, k) << endl;

    return 0;
}