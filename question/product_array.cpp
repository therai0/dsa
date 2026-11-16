/*
Question link: https://leetcode.com/problems/product-of-array-except-self/
*/

#include <iostream>
#include <vector>

using namespace std;

void burteForce(vector<int> ar)
// timpe complexity: 0(n^2) worst case;
{
    vector<int> v;
    for (int i = 0; i < ar.size(); i++)
    {
        int temp = 1;
        for (int j = 0; j < ar.size(); j++)
        {
            if (j != i)
            {
                temp = temp * ar[j];
            }
        }
        v.push_back(temp);

    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}


void optimizeSoln(vector<int> ar) {
    vector<int> prefix(ar.size(),1);
    vector<int> suffix(ar.size(),1);
    vector<int> ans(ar.size(),1);

    for(int i = 1; i < ar.size(); i++){
        prefix[i] = prefix[i-1] * ar[i-1]; 
    }
    for(int i = ar.size()-2; i >=0; i--){
        suffix[i] = suffix[i+1] * ar[i+1]; 
    }
    
    for(int i = 0; i < ar.size(); i++) {
            ans[i] = suffix[i] * prefix[i];
    }

    for(int x: ans) {
        cout << x << " ";
    }

}
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    // burteForce(vec);
    optimizeSoln(vec);

    return 0;
}