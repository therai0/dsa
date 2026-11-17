#include<iostream>
#include<vector>

using namespace std;


int searchRotated(vector<int> arr,int target) {

    int st = 0;
    int ed = arr.size()-1;
    while(st <= ed) {
        int mid = (st + ed )/2;
        if(arr[mid] == target) {
            return mid;
        }
        // check left half is sorted or not
        if(arr[st] <= arr[mid]) {
            if((arr[mid] > target) && (target > arr[st])) {
                ed = mid-1;
            } else {
                st = mid + 1;
            }
            // else right half is sorted
        } else {
            if((arr[mid] < target) && (arr[ed] <= target)) {
                st = mid +1 ;
            } else {
                ed = mid -1;
            }
        }
    }
    return -1;
}
int main() {

    vector<int> arr={4,5,6,7,0,1,2};
    int a = searchRotated(arr,2);
    int x = searchRotated(arr,12);
    cout << "2 is found in Index:" << a << endl;
    cout << "Index:" << x << endl;
    return 0;
}