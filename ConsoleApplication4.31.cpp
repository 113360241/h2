
#include <iostream>
using namespace std;
int main()
{
    int a;
    double b,c;
    cin >> a;
    if (a % 2 == 0)
        return 0;
    b = (a - 1) / 2;
    
    c = (double)a / 2 + 0.5;
 
    for (int i = 0; i < b; i++) {
        for(int j = 0; j < a; j++) {
            if (j >= c - i-1 && j <= c + i-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
        

        for (int i = b; i >=0; i--) {
            for (int j = 0; j < a; j++) {
                if (j <= c + i -1&& j >= c - i-1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
}

