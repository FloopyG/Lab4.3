
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, x, c, xp, xk, dx, i, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "------------------" << endl;
    cout << "|" << setw(3) << "N" << "  |" << setw(5) << "F" << "     |" << endl;
    cout << "------------------" << endl;

    i = 1;
    x = xp;
    while (x <= xk) {
        if (x < 0.6 && b + c != 0)
            F = a * pow(x, 2) + pow(b, 2) + c;
        else
            if (x > 0.6 && b + c == 0)
                F = (x - a) / (x - c);
            else
                F = x / c + x / a;


        cout << "|" << setw(3) << setprecision(0) << i << "  |" << setw(7) << setprecision(2) << F << "   |" << endl;

        i++;
        x += dx;
    };
    cout << "------------------" << endl;


    system("pause");
    cin.get();
    return 0;
}
