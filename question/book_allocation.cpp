#include <iostream>
#include <vector>

using namespace std;
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
        temp = (a > y) ?  a: y;
        minSum = (temp < minSum) ? temp:minSum;
    }
    return minSum;
}
int main()
{
    vector<int> x = {2, 1, 3, 4};
    vector<int> y = {7,2,5,10,8};
    int a = bookAllocation(y);
    cout << "Minimum sum is: " << a ;;
    return 0;
}