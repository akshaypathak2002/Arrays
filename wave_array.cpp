/*In  this we have to sort array in the form of wave that is  first greater than smaller */
#include <iostream>
#include <vector>
using namespace std;
void wave_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i += 2) // We are running this loop till n-1 because we are checking for i+1 index in every time
    {
        if (arr[i] <= arr[i + 1])//We are checking if the previous element is less than the current element true then we swap 
        {
            arr[i] ^= arr[i + 1];
            arr[i + 1] ^= arr[i];
            arr[i] ^= arr[i + 1];
        }
    }
    //As we are running a single loop its time complexity is O(N)
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
    wave_array(arr); // We simply pass the array
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    return 0;
}