#include <iostream>

using namespace std;

int main() {
    int puntaje;
    char repetir, calificacion;

    do {
        cout << "Ingrese un puntaje entre 0 y 10: ";
        cin >> puntaje;

        switch (puntaje) {
            case 10:
            case 9:
                calificacion = 'A';
                break;
            case 8:
                calificacion = 'B';
                break;
            case 7:
                calificacion = 'C';
                break;
            case 6:
                calificacion = 'D';
                break;
            default:
                calificacion = 'F';
                break;
        }

        cout << "Tu calificación en letras es: " << calificacion << endl;
        cout << "¿Deseas calificar otro puntaje? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');

    return 0;
}
