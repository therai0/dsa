#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>num) {
    if(num.size() == 1) {
        return num[0];
    }

    int ans = num[0];
    for(int i = 1; i < num.size();i++) {
        ans = ans^num[i];
    }

    return ans;
}

int main()
{
    // initilizing the vector
    // vector<int> v;

    // vector<int> x(3,0);
    // cout << x[0];
    // cout << x[1];
    // cout << x[2];

    // vector <char> ab = {'a','b','c','d','e'};

    // for(char x:ab) {
    //         cout << x << endl;
    // }

    // size of vector
    // cout << ab.size();

    // cout << v.size() << endl;
    // pushing the elements
    // v.push_back(100);
    // cout << v.size();

    // v.push_back(12);
    // v.push_back(13);
    // v.push_back(14);

    // for(int x:v) {
    //     cout << x << endl;
    // }
    
    // v.pop_back();
    // cout << "After pop" << endl;
    // for(int x:v) {
    //     cout << x << endl;
    // }

    // cout <<"At font:" <<  v.front() << endl;
    // cout << "At back:" << v.back() << endl;

    // cout << "At 0th position:" << v.at(0);


    vector<int> v = {1,1,23,4,54,54,4,23,24};
    int ans  = singleNumber(v);
    cout << "Ans:" << ans ;
    return 0;
}