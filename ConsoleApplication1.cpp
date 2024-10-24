// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    double ac, b, ch, cr, cl;
    while (1) {
        cout << "Enter account number (-1 to end):  \n";
        cin >> ac;
        if (ac == -1)
            break; 
        cout << "Enter beginning balance: \n";
        cin >> b;
        cout << "Enter total charges:  \n";
        cin >> ch;
        cout << "Enter total credits:  \n";
        cin >> cr;
        cout << "Enter credit limit:  \n";
        cin >> cl;

        if (cr < cr + b) {
            cout << "Account:" << ac << endl << "Credit limit:" << cl << endl;
            cout << "Balance:" << cr + b << endl << "Credit Limit Exceeded." << endl;
        }

    }
}