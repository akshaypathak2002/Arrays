/*
In this we have to find k-th smallest element in the array */
#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
// Naive approach
int kthSmallesElement(vector<int> &arr, int k)
{
    // k is the smallest element to be found
    sort(arr.begin(), arr.end());
    return arr[k - 1]; // Its time complexity O(n.logn)
    // using predefined sort function
    // Its time complexity is O(1)
}
// using priority_queue
int kthSmallest(vector<int> &arr, int k)
{
    // we are going to use priority_queue with the help of vector
    priority_queue<int, vector<int>, greater<int>> ans;
    // here greater int is a functor
    // we are making the min-heap
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push(arr[i]);
    }
    int count = 0; // To keep track of the element that is poped
    int res;
    while (!ans.empty())
    {
        if (count == k - 1)
        {
            res = ans.top(); // Top element of the min_heap
            ans.pop();
            break;
        }
        count++;
        ans.pop();
    }
    return res;
}

int main()
{
    // For the size of the vector
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    // For kth smallest element
    int k;
    cin >> k;
    cout << kthSmallest(arr, k);
    return 0;
}