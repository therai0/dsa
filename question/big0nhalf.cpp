#include<iostream>
#include<vector>

using namespace std;

int main() {

        vector<int> vec = {10,20,30,40,50};
        int i = 0;
        int j = vec.size();
        int sum = 0;
        while(i<j) {
            cout<< "Hello world" << endl;
            sum += vec[i] + vec[j];
            i++;
            j--;
        }
        cout << sum;
    return 0;
}