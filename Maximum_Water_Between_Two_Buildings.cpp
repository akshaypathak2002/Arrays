// In this we have to find the maximum water between two buildings
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxWater(vector<int> &height, int n)
{
    // In this we are going to use two pointer algorithm
    int low = 0;
    int high = n - 1;
    int max1 = 0;
    int min1 = 0;
    int ans = 0;
    while (low <= high)
    {
        min1 =  min(height[low], height[high]);//We take minimum of  the two buildings 
        max1 = high - low - 1;//Then gap between them 
        ans = max(ans, (min1 * max1));//Then maximum of ans and gap 
        cout << ans << endl;
        if (height[high] <= height[low])
            high--;
        else
            low++;
    }
    return ans;
    // Its time complexity is O(N)
    // And its Space complexity is O(1)
}
int main()
{
    int n;
    cin >> n;
    vector<int> height;
    height.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        height.push_back(temp);
    }
    cout << maxWater(height, n) << endl;

    return 0;
}