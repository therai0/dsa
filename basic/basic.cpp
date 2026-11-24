

#include <iostream>
using namespace std;

int loop(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
    return 0;
}

int ifelse(int age)
{
    if (age > 18)
    {
        cout << "You are eligible";
    }
    else
    {
        cout << "Not eligible";
    }
    return 0;
}

// patter

void traingle()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j < 5; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << "" << endl;
    // }

    for (int i = 0; i <= 6; i++)
    {
        int j = i;
        while (j > 0)
        {
            cout << "*";
            j -= 1;
        }
        cout << "" << endl;
    }
}

void recetangle()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            cout << "*";
        }
        cout << "" << endl;
    }
}

void pyramid()
{
    for (int i = 0; i <=5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        for(int j = 0; j<=i; j++) {
            cout << "*";
        }
        cout << "" << endl;
    }
}


void reversePymarid(){
    for(int i = 0; i <= 5; i++) {
        for(int j = 0; j <=i; j++) {
            cout << " ";
        }
        for(int k = i; k <=5;k++) {
            cout << "*";
        }
        for(int k = i; k <=5;k++) {
            cout << "*";
        }
        cout << "" << endl;
    } 
}
void dimond(){
    // upper part
    for(int a = 0; a <=5;a++) {
        for(int b = 5; b >= a; b--) {
            cout << " ";
        }
        for(int c = 0; c <= a; c++) {
            cout << "*";
        }
        for(int d = 0; d <=a;d++) {
            cout << "*";
        }
        cout << " " << endl;
    }

    // lower part
    for(int i = 0; i <= 5; i++) {
        for(int j = 0; j <=i; j++) {
            cout << " ";
        }
        for(int k = i; k <=5;k++) {
            cout << "*";
        }
        for(int k = i; k <=5;k++) {
            cout << "*";
        }
        cout << "" << endl;
    } 
}

void alphabetTriangle() {
    for(int i = 0;i <=5; i++) {
        for(int j = i; j <=5;j++) {
            cout << " ";
        }
        for(int k = 0; k<=i; k++) {
            cout << (char)('A' + k);
        }
        for(int l = 0; l<=i; l++) {
            cout << (char)('A' + l);
        }
        cout << "" << endl;
    }
}
int main()
{

    // int a = loop(5);
    // cout << a;
    // ifelse(20);
    // traingle();
    // recetangle();
    // pyramid();
    // reversePymarid();
    // dimond();
    // alphabetTriangle();
    return 0;
}