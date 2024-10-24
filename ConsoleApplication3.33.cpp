#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cin >> i >> j;
    for (int a=i; a > 0; a--) {
        for (int b = j; b > 0; b--) {
            if (a == 1 || a == i)
                cout << "*";
            else {
                if (b == j || b == 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
