#include <iostream>
#include <vector>

using namespace std;

/*
Array is sorted:
Solving pair sum problem
by
--> Burte force approach
-->
*/

vector<int> burteForce(vector<int> arr, int target)
{
    vector<int> index;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        for (int k = i + 1; k < arr.size(); k++)
        {
            if ((arr[i] + arr[k]) == target)
            {
                index.push_back(i);
                index.push_back(k);
                break;
            }
        }
    }
    return index;
}

vector<int> OptimizeSolution(vector<int> arr, int target)
{
    int i = 0;
    int j = arr.size() - 1;
    vector<int> index;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            index.push_back(i);
            index.push_back(j);
            break;
        }
        if (sum > target)
        {
            j -= 1;
        }
        if (sum < target)
        {
            i += 1;
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    // int target = 36;
    // vector<int> an = burteForce(arr, target);
    vector<int> an = OptimizeSolution(arr,6);
    for (int x : an)
    {
        cout << x << " ";
    }
    return 0;
}