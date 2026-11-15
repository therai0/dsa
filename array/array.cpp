#include<iostream>

using namespace std;


void reverseArray(int a[],int size) {

    int i = 0;
    for(int j =size-1; j >=size/2; j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
    }

    for(int k = 0; k < size;k++) {
        cout << a[k] << " ";
    }
}


void linearSearch(int a[],int target,int l) {
    int j = INT_MIN;
    for(int i = 0; i < l;i++) {
        if (a[i] == target) {
                j = i; 
                break;
        }
    }
    if (j == INT_MIN) {
        cout << "There is no element found";
    }
    else {
        cout << j;
    }
}

int main() {

    int a[] = {10,11,12,13,14};
    // cout << "Before Reverse array:";

    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     cout << a[i] << " ";
    // }
    // cout << " " << endl;
    // cout << "After reverse:";
    // reverseArray(a,(sizeof(a)/sizeof(a[0])));

    linearSearch(a,13,(sizeof(a)/sizeof(a[0])));
    
    return 0;
}