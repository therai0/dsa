#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> stal, int k, int min)
{

    int c = 1;
    int prevStal = stal[0];
    int i = 1;
    while (i < stal.size())
    {
        if ((stal[i] - prevStal) >= min)
        {
            c++;
            prevStal = stal[i];
        }
        i++;
    }

    return c >= k;
}
int aggressiveCow(vector<int> &stal, int k)
{
    int min = 1;
    sort(stal.begin(), stal.end());
    int max = stal.back() - stal.front();

    
    if (k <= 1 || stal.size() < k)
    {
        return -1;
    }
    if (k == 2)
    {
        return max - min;
    }
    int ans = 0;
    while (min <= max)
    {

        int mid = (min + max) / 2;
        if (isValid(stal, k, mid))
        {
            ans = mid;
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> stal = {1, 2, 8, 4, 9};
    int k = 3;
    int ans = aggressiveCow(stal, k);
    cout << ans;
    return 0;
}