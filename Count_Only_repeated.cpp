// In this we have to count only repeated element in the array
#include <iostream>
#include <map>
#include <vector>
using namespace std;

pair<int, int> findRepeating(vector<int> &arr, int n)
{
    // Here we are going to use simple logic just put the element into the map and increase its count
    map<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        ans[arr[i]]++;
    }
    for (auto ele : ans)
    {
        if (ele.second >= 2)
            return {ele.first, ele.second};
        // We are returing the element that has count greater than 1
    }
    return {-1, -1};
    // Its time complexity is O(N)
    // Its space complexity is also O(N)
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    pair<int, int> ans = findRepeating(arr, n);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}