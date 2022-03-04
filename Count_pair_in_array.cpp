// To count  number of pairs in a sorted array
#include <iostream>
using namespace std;
int countPair(int arr[], int ele, int n)
{
    // In this we are going to use two pointer algorithm
    int low = 0;
    int high = n - 1;
    int count = 0;
    while (low < high)
    {
        if (arr[low] + arr[high] == ele)
        { // If we find any element like this we will count that and decrease the value of high and increase value of low
            count++;
            high--;
            low++;
        }
        else if (arr[low] + arr[high] > ele)
            high--; // Decreasing the value of high
        else
            low++;
    }
    if (count == 0)
        return -1;
    return count;
}