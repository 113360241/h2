#include <iostream>
using namespace std;
int main()
{
    double h, r, s;
    int t;

    cout << "Enter type:\n";
    cin >> t;
    switch (t) {

    case 1:
        int w;
        double ws;
        cout << "Enter week:\n";
        cin >> w;
        cout << "Enter weekly salary:  \n";
        cin >> ws;
        s = w * ws;
        break;
    case 2:
        cout << "Enter # of hours worked (-1 to end):  \n";
        cin >> h;
        if (h == -1)
            break;
        cout << "Enter hourly rate of the worker ($00.00):  \n";
        cin >> r;
        if (h <= 40)
            s = h * r;
        else
            s = 40 * r + (h - 40) * 1.5 * r;
        break;
    case 3:
        cout << "Enter sales in dollars (-1 to end):  \n";
        cin >> s;
        if (s == -1)
            break;
        s = 0.057 * s + 250;
        break;
    case 4:
        cout << "Enter numbers:  \n";
        cin >> h;
        cout << "Enter money:  \n";
        cin >> r;
        s = h * r;
    }
    cout << "Salary is :" << s << endl;


}
