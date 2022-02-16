// In this we have to find the strongest neighbour that means greatest element in adjacent pairs
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void strongest_Neighbour(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int strongest = max(arr[i], arr[i + 1]);
        cout << strongest << " ";
    }
    // Its time complexity is O(N)
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter size of the array you want " << endl;
    cin >> n;
    arr.reserve(n); // To fix the size of the array
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    // To find the strongest Neighbour
    strongest_Neighbour(arr);
    return 0;
}
