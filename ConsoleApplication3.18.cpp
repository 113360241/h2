
#include <iostream>
using namespace std;
int main()
{
    double s;
    while (1) {
        cout << "Enter sales in dollars (-1 to end):  \n";
        cin >> s;
        if (s == -1)
            break;
        cout << "Salary is :" << 0.09 * s + 200 << endl;
    }
}

