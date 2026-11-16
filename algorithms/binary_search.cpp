

#include <iostream>
#include <vector>

using namespace std;

int iterativeMethod(vector<int> v, int target)
{
    int lf = 0;
    int ri = v.size() - 1;
    while (lf != ri)
    {
        int mid = (lf + ri) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        if (v[mid] < target)
        {
            lf = mid + 1;
        }
        else
        {
            ri = mid - 1;
        }
    }
    return -1;
}

int recursiveMethod(vector<int> v, int target, int lf, int ri)
{
    // base case
    if (lf > ri)
    {
        return -1;
    }
    int mid = (lf + ri) / 2;

    if (v[mid] == target)
    {
        return mid;
    }
    if (v[mid] > target)
    {
        return recursiveMethod(v, target, lf, mid - 1);
    }
    return recursiveMethod(v, target, mid + 1, ri);
}

int main()
{
    vector<int> v = {1, 23, 4, 45, 6, 7};
    // int ans = iterativeMethod(v, 4);
    // cout << "Index:" << ans << endl;

    int a = recursiveMethod(v, 1,0,v.size()-1);
    cout << a << endl;
    return 0;
}