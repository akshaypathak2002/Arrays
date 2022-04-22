// In this we are given two array and we have to find the second array is subset of first or not
#include <iostream>
#include <vector>
#include <map>
using namespace std;
string isSubset(vector<int> &A1, vector<int> &A2)
{
    map<int, bool> subset;
    for (int i = 0; i < A1.size(); i++)
    {
        subset[A1[i]] = true;
    }
    for (int i = 0; i < A2.size(); i++)
    {
        if (subset[A2[i]] != true)
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> A;
    A.reserve(n1);
    vector<int> B;
    B.reserve(n2);
    for (int i = 0; i < n1; i++)
    {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    for (int i = 0; i < n2; i++)
    {
        int temp;
        cin >> temp;
        B.push_back(temp);
    }
    cout << isSubset(A, B) << endl;
    return 0;
}