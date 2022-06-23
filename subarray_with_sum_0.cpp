// In this we are given an array and we have to find if there exists and subarray with sum
#include <iostream>
#include <set> //In this we are going to use set
#include <vector>
using namespace std;
class subarraySum
{
private:
    vector<int> array;

public:
    subarraySum()
    {
        int n;
        cout << "Enter the size of the array you want " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            array.push_back(temp);
        }
    }
    bool subarraywithsum0()
    {
        set<int> s1;
        // In this we are going to use both prefix sum technique and hashing simentinously4
        int curr_sum = array[0];
        s1.insert(array[0]);
        for (int i = 1; i < array.size(); i++)
        {
            curr_sum += array[i];
            if (s1.find(array[i]) != s1.end()) // If we find the sum that is already in set that means we find subarray with sum 0
                return true;
            if (curr_sum == 0) // for special cases like 1 2 -3 -->In this all elements has sum 0
                return true;
            s1.insert(curr_sum); // If not found in the array then insert it into the hash
        }
        //Its time complexity is O(N) and its space complexity is O(N) as we are using extra space 
        return false;
    }
};
int main()
{
    subarraySum s1;
    if (s1.subarraywithsum0()) // It this is true then it going to print Yes
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}