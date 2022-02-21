// In this we have to find the minimum difference in an circular array
/* for example
 n=7
 arr[]={8,-8,9,-9,10,-11,12}
 Now difference : 16 17 18 19 21 23 4 [this is the absolute difference between each adjacent pair ]
 so minimum is 4
 This is our required answer
 One important thing need to remember is that it is a circular array so we need to consider the last and first element difference also
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int minAdjDif(vector<int> &arr)
{
    // Now for the first and last element diff as we are have circular array
    int ans = abs(arr[arr.size() - 1] - arr[0]);
    for (int i = 0; i < arr.size() - 1; i++)
    {
        ans = min(ans, abs(arr[i] - arr[i + 1]));
    }
    return ans;
    // As we are running a single loop its time complexity is O(N)
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
    cout<<minAdjDif(arr)<<endl;
    return 0;
}