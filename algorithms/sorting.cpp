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

void selectionSort(vector<int> vec){

    int n = vec.size();
    for(int i = 0 ; i < vec.size();i++){
        int key = vec[i];
        int j = i -1;
        while(j >=0  && vec[j] > key) {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = key;
    }

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}
int main() {
    vector<int> v = {12,3,54,6};
    // bubbleSort(v);
    selectionSort(v);
    return 0;
}