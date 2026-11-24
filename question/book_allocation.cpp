#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> v, int k, int max)
{

    int student = 1;
    int page = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(max < v[i]) {
            return false;
        }
        if( (page + v[i]) <= max) {
            page += v[i];
        } else {
            student++;
            page =v[i];
        }
    }
    return (student <= k) ? true:false;
}
// k isn't constant
int bookPageAllocation(vector<int> v, int k)
{
    int st = 0;
    int max = 0;
    int n = v.size();
    if(k > n) {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        max += v[i];
    }
    int ans = 0;
    while (st <= max)
    {
        int mid = (st + max) / 2;
        if(isValid(v,k,mid)) {
            ans = mid;
            max = mid -1;
        }else {
            st = mid + 1;
        }
    }
    return ans;
}

// k value is constant
int bookAllocation(vector<int> b, int k = 2)
{
    int n = b.size();
    int minSum = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        int a = 0;
        int y = 0;
        int x = i;
        int temp = 0;
        while (x >= 0)
        {
            a += b[x];
            x--;
        }
        for (int j = i + 1; j <= n - 1; j++)
        {
            y += b[j];
        }
        temp = (a > y) ? a : y;
        minSum = (temp < minSum) ? temp : minSum;
    }
    return minSum;
}
int main()
{
    // vector<int> x = {2, 1, 3, 4};
    vector<int> y = {7,2,5,10,8}; // 18
    // int a = bookAllocation(y);
    // cout << "Minimum sum is: " << a ;;

    int ans = bookPageAllocation(y, 5);
    cout << ans;

    return 0;
}