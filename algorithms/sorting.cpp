#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> vec) {

    for(int i = 0; i < vec.size()-1; i++) {
        for(int j = 0; j < vec.size() - i - 1; j++ ) {
            if(vec[j] > vec[j+1]) {
                swap(vec[j],vec[j+1]);
            }
        }
    }

    for(int i = 0 ;  i < vec.size(); i++) {
        cout << vec[i] << " ";
    }


}
int main() {
    vector<int> v = {12,3,54,6};
    bubbleSort(v);
    return 0;
}