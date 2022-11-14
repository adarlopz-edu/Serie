#include <iostream>

using namespace std;

int main()
{
    int num{}, max{}, f, numw, maxw, w, numd{}, maxd, d;

    if (num > max) {
        cout << "Introduce un numero menor al limite\n";
    }
    else {
        cout << "Ciclo For\n";
        cout << "Introduce un numero: ";
        cin >> num;

        cout << "Introduce el limite: ";
        cin >> max;

        for (f = num; f < max; f = f + num) {
            cout << f << "\n";
        }

        cout << "Ciclo while\n";
        cout << "Introduce un numero: ";
        cin >> numw;

        cout << "Introduce el limite: ";
        cin >> maxw;

        w = numw;
        while (w < maxw)
        {
            cout << w << "\n";
            w = w + numw;
        }

        cout << "Ciclo Do\n";
        cout << "Introduce un numero: ";
        cin >> numd;

        cout << "Introduce el limite: ";
        cin >> maxd;
        d = numd;
        do
        {
            cout << d << "\n";
            d = d + numd;
        } while (d < maxd);

    }
}
