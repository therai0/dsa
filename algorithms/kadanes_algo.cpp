#include <iostream>
#include <vector>

using namespace std;

// implementing the burteforce solution to find the maximum subarray;
void burteForce(vector<int> ar)
{
    int max = ar[0];

    for (int st = 0; st < ar.size(); st++)
    {
        for (int end = st; end < ar.size(); end++)
        {
            int temp = 0;
            for(int t = st; t <= end; t++) {
                temp += ar[t];
            }
            if (max < temp) {
                max = temp;
            }
        }
    }

    cout << "Maximum subarray sum:" << max;
}

void KadensAlgo(vector<int>ar) {
    if (ar.size() == 1) {
        cout << ar[0];
    }

    int max = INT_MIN;
    int current_sum = 0;
    for(int i = 0; i < ar.size(); i++) {
        current_sum += ar[i];
        if (max < current_sum) {
            max= current_sum;
        }
        if (current_sum  < -1) {
            current_sum = 0;
        }
    }
    cout << "Max subarray:" << max;
}
int main()
{

    vector<int> a = {12, 3, -45, -6,6};
    burteForce(a);
    cout << endl;
    KadensAlgo(a);

    return 0;
}