
/*
https://leetcode.com/problems/valid-mountain-array/
*/

#include <iostream>
#include <vector>

using namespace std;

bool isValidMountain(vector<int> vec)
{
    int n  = vec.size();
        if(n < 3 ) {
            return false;
        }
        int i = 0;
        while (i < n-1 && vec[i] < vec[i+1]) {
            i++;
        }

        if (i == n-1 || i == 0) {
            return false;
        }
        while (i < n-1 && vec[i] > vec[i+1]) {
            i++;
        }
        return i == n-1;
    }

int main()
{

    vector<int> vec = {0, 3, 2, 1};
    return 0;
}