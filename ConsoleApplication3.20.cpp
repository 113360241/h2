#include <iostream>
using namespace std;
int main()
{
    double h,r,s;
    while (1) {
        cout << "Enter # of hours worked (-1 to end):  \n";
        cin >> h;
        if (h == -1)
            break;
        cout << "Enter hourly rate og the worker ($00.00):  \n";
        cin >> r;
        if (h <= 40)
            s = h * r;
        else
            s = 40 * r + (h - 40) * 1.5 * r;
        cout << "Salary is :" << s << endl;
    }
}

