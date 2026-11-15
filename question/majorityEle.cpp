#include <iostream>

using namespace std;

/*
Finding the majority elements
by
--> BurteForce method
-->

*/

int brutForce(vector<int> arr)
{
    int freq = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j] && (i != j))
            {
                freq += 1;
            }
        }
        if (freq > arr.size() / 2)
        {
            return arr[i];
        }
    }
}

int mooresVoting(vector<int> arr)
{
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 4, 4, 4};
    // int ans = brutForce(arr);
    // mooresVoting(arr);
    // cout << ans;
}