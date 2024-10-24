#include <iostream>
using namespace std;
int main()
{
    double in = 5000,y=15,r=0.01;
    for (int i = y; i > 0; i--) {
        in *= (1 + r);
        cout << 16 - i << "  $" << in << "  " << r << "%" << endl;
        r += 0.0005;
    }
}
