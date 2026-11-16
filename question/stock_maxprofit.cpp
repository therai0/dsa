#include<iostream>
#include<vector>
using namespace std;



int main() {

vector<int> vec = {1,2,34,6,6};
int max_profit = 0;
int buy = vec[0];
for(int i = 0; i < vec.size(); i++) {
    if(buy > vec[i]) {
        buy = vec[i];
    }
    if(max_profit < vec[i] - buy) {
        max_profit = vec[i] - buy;
    }
}

cout << "Max profit:" << max_profit;
}