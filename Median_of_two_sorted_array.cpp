// In this we have to find the median of two sorted arrays
#include <iostream>
#include <vector>
using namespace std;
double MedianOfArrays(vector<int> &array1, vector<int> &array2)
{
    vector<int> temp;
    // We are going to use merge procedure
    int i = 0;
    int j = 0;
    int n1 = array1.size();
    int n2 = array2.size();
    // Here we are using simple merge procedure
    while (i < n1 && j < n2)
    {
        if (array1[i] <= array2[j])
        {
            temp.push_back(array1[i]);
            i++;
        }
        else
        {
            temp.push_back(array2[j]);
            j++;
        }
    }
    // Its time complexity is O(n+m)
    while (i < n1)
    {
        temp.push_back(array1[i]);
        i++;
    }
    while (j < n2)
    {
        temp.push_back(array2[j]);
        j++;
    }
    if ((temp.size() & 1) == 1)
    { // For the length of array is odd
        return double(temp[temp.size() / 2]);
    }
    // For length of the array is even
    return double((temp[temp.size() / 2] + temp[(temp.size() - 1) / 2]) / 2.0);
    // Its time complexity is O(N+M) that is the size of first array + size of second array
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> Array1;
    Array1.reserve(n1);
    vector<int> Array2;
    Array2.reserve(n2);
    for (int i = 0; i < n1; i++)
    {
        int temp;
        cin >> temp;
        Array1.push_back(temp);
    }
    for (int i = 0; i < n2; i++)
    {
        int temp;
        cin >> temp;
        Array2.push_back(temp);
    }
    cout << MedianOfArrays(Array1, Array2) << endl;
    return 0;
}