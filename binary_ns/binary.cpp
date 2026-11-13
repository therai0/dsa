#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;


void decimalToBinary(int n) {
        int pw = 0;
        int ans = 0;
        while(n >0) {
            int bn = n % 2;
            ans += bn * pow(10,pw);
            pw +=1;
            n = n/2;
        }
        cout << ans;
}

void binaryToDecimal(int n) {
    int ans = 0;
    int pw = 0;
    while(n > 0) {
        int rm = n % 10;
        ans += rm * pow(2,pw);
        n = n/10;
        pw += 1;
    }
    cout << ans;
}

int main() {

        // method to convert the decimal into binary
        // decimalToBinary(10);
        
        // method to conver the binary into decimal
        // binaryToDecimal(101);

        // int n = -12;
        // cout << bitset<8>(n);
    return 0;
}