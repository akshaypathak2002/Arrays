//IN this we have to find the common elements between three array that simply means we have to find intersection 
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<int> commonElements(vector<int> &A, vector<int> &B, vector<int> &C)
{
    vector<int> ans;
    set<int> s1;
    set<int> s2;
    set<int> s3;
    set<int> s4; // To Store the result of the s1 and s2
    for (int i = 0; i < A.size(); i++)
    {
        s1.insert(A[i]);
    }
    for (int i = 0; i < B.size(); i++)
    {
        s2.insert(B[i]);
    }
    for (int i = 0; i < C.size(); i++)
    {
        s3.insert(C[i]);
    }

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
    set_intersection(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(ans, ans.begin()));
    // Its time complexity is O(N)
    // Its space complexity is also O(N)
    return ans;
}
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> A;
    A.reserve(n1);
    vector<int> B;
    B.reserve(n2);
    vector<int> C;
    C.reserve(n3);
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
    for (int i = 0; i < n3; i++)
    {
        int temp;
        cin >> temp;
        C.push_back(temp);
    }
    vector<int> ans = commonElements(A, B, C);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
