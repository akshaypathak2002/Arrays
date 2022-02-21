// IN this we have to find the equilibrium point in an array that is elements after and before it have equal sum
#include <iostream>
#include <vector>
using namespace std;
int equilibriumPoint(vector<long long> &arr)
{
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    long long left_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (left_sum == sum - arr[i]) // If this condition is not satisified then outside of loop return -1
        {
            return i + 1;
        }
        left_sum += arr[i];
        sum -= arr[i];
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<long long> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << equilibriumPoint(arr) << endl;

    return 0;
}