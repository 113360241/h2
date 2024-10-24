// ConsoleApplication3.19.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    double lp, r, d;
    while (1) {
        cout << "Enter loan principal (-1 to end):  \n";
        cin >> lp;
        if (lp == -1)
            break;
        cout << "Enter interest rate:  \n";
        cin >> r;
        cout << "Enter term of loan in days:  \n";
        cin >> d;
        cout << "The interest charge is $" << r/365*d*lp<< endl;
    }
}
