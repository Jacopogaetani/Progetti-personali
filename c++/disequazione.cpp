#include <complex>
#include <iostream>
using namespace std;

int main() {
    int a, b, c, x1 = 0, x2 = 0, delta = 0, numero = -1;

    cout<<"Questo programma troverà le soluzioni reali di una disequazione di secondo grado ax^2 + bx + c \n Inserisci la a (Intero positivo): ";
    cin >> a;
    cout<<"Inserisci la b (Intero positivo): ";
    cin >> b;
    cout<<"Inserisci la c (Intero positivo: ";
    cin>>c;

    //Calcolo delta

    delta = (b * b) - 4*a*c;

    cout<<"Delta: "<<delta<<endl;



    x1 = ((b * numero + sqrt(delta)) / 2 * a);

    x2 = ((b * numero - sqrt(delta)) / 2 * a);

    cout<<"X1: "<<x1<<endl;
    cout<<"X2: "<<x2<<endl;


    return 0;
}