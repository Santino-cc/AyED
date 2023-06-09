#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
     double pi = 0;
    int numerador = 1;
    double denominador = 1;
    int i = 0;

     while (abs(4 * pi - 3.141592) >= 0.000001) { // Coon el while me aseguro de que el proceso continúe hasta el fallo.
        denominador = 2 * i +1; // Calculo el denominador usando la fórmula de número impar: 2 * k + 1; el i va subiendo progresivamente.
        pi += numerador / denominador; // Hago la cuenta general, el numerador que es siempre 1 dividio por el denominador mencionado previamente
        numerador *= -1; // Me aseguro de que el signo del numerador cambie de 1 a -1 constantemente
        i++;
    }
    
    pi *= 4; // Al ser el resultado de pi = pi / 4, lo multplico por 4 para que me quede solo pi.

    cout << "El valor aproximado de pi es: "<<setprecision(7)<<pi<<endl; // Pido que me devuelva el resultado y uso setprecision para reducirlo a 7 cifras.

    return 0;
}