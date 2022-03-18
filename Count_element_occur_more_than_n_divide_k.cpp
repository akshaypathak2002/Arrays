// In this we have to count element that appear more than n/k
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int countOccurance(vector<int> &arr, int n, int k)
{
    map<int, int> frequency;
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    int res = 0;
    for (auto ele : frequency)
    {
        if (ele.second > n / k)
            res++;
    }
    return res;
    // Its time complexity is O(N)
    // Its space complexity is also O(N)
}
int main()
{
    int n; // For the size of the vector
    cin >> n;
    int k; // For the value of k
    cin >> k;
    vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << countOccurance(arr, n, k);
    return 0;
}