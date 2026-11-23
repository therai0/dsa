// Merge two sorted array
#include<iostream>
#include<vector>

using namespace std;


void mergeTwoSortedArray(vector<int> ar,vector<int> ar2,int m,int n){
    int x = (m + n)-1;

    int a = m-1;
    int b = n-1;
    while(a >= 0 && b >= 0) {
        if(ar[a] > ar2[b]) {
            ar[x] = ar[a];
            a--;
        } else {
            ar[x] = ar2[b];
            b--;
        }
        x--;
    }

    for(int i = 0; i < ar.size(); i++) {
        cout << ar[i] << " ";
    }
}
int main(){


    vector<int> a = {1,2,3,0,0,0};
    vector<int> b= {5,6,7};
    int x = 3;
    int y = 3;

    mergeTwoSortedArray(a,b,x,y);
    return 0;
}