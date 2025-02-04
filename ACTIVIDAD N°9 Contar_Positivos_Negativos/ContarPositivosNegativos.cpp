#include <iostream>
using namespace std;
int main() {
    int array[15];
    int positivos = 0, negativos = 0;

    cout << "Ingrese 15 numeros:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> array [i];
    }
    for (int i = 0; i < 15; i++) {
        if (array[i] > 0) {
            positivos++;
        } else if (array[i] < 0) {
            negativos++;
        }
    }
    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    return 0;
}