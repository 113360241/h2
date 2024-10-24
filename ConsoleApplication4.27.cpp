
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a ;
    double b,c;
    for (a = 1; a <= 500; a++) {
        for (b = 1; b <= 500; b++) {
            if (a * a + b * b <=250000) {
                c = sqrt(a * a + b * b);
                if (c == (int)c)
                    cout << a << " " << b << " " << c << endl;
            }
        }
    }
}

