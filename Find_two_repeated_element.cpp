// We have to find the two repeated element in the array
#include <iostream>
#include <vector>
using namespace std;
vector<int> twoRepeated(vector<int> &arr, int N)
{
    // We are making an boolean array and and check if we already marked it as true then push in our answer vector
    vector<bool> isRepeat(N, false); // Two repeated element in the array
    vector<int> ans;
    for (int i = 0; i < N + 2; i++)
    {
        if (!isRepeat[arr[i]])
            isRepeat[arr[i]] = true;
        else
            ans.push_back(arr[i]);
    }
    return ans;
    // Its time complexity is O(N)
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.reserve(n); // To fix the size of the vector
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int> ans = twoRepeated(arr, n);
    cout<<ans.size();
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
    return 0;
}