/*
Question link:https://leetcode.com/problems/container-with-most-water/
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int left = 0;
    int right = vec.size() - 1;
    int area = 0;
    while (left != right)
    {
        int temp = 0;
        if (vec[left] < vec[right])
        {
            temp = vec[left] * (right - left);
            left++;
        }
        else
        {
            temp = vec[right] * (right - left);
            right--;
        }
        if (temp > area)
        {
            area = temp;
        }
    }
    cout << "Max area:" << area;
    return 0;
}