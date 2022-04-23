// In this we have to sort the first array to according to the second arraay
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> sortA1ByA2(vector<int> &A1, int N, vector<int> &A2, int M)
{
    map<int, int> freq;
    vector<int> ans;
    for (int i = 0; i < N; i++)
    {
        freq[A1[i]]++;
    }
    // Here we sort according to the other
    for (int i = 0; i < M; i++)
    {
        if (freq[A2[i]] >= 1)
        { // If that element is present in hashmap
            while (freq[A2[i]] > 0)
            {
                ans.push_back(A2[i]);
                freq[A2[i]]--;
            }
        }
    }
    // Now making temporary array from remaining element in hashmap
    vector<int> temp;
    for (auto ele : freq)
    {
        if (ele.second >= 1)
        {
            while (ele.second > 0)
            {
                temp.push_back(ele.first);
                ele.second--;
            }
        }
    }
    sort(temp.begin(), temp.end()); // Sorting the remaining elements
    for (int i = 0; i < temp.size(); i++)
    {
        ans.push_back(temp[i]);
    }
    return ans;
    // Its time complexity is O(N.logN)
    // Its space complexity is O(N)
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
    vector<int> res = sortA1ByA2(A1, n1, A2, n2);
    for (auto ele : res)
    {
        cout << ele << " ";
    }
    return 0;
}