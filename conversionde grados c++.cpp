#include <iostream>//usar

using namespace std;//usamos espacio de nombre estandar cout (salida), cin(entrada), cerr (salida de errores),
//clog (se usa para mensaje de log

int main()
{
    float celsius, fahrenheit;

    cout <<"Grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius* 9 / 5) +32;

    cout <<celsius << "�C son" << fahrenheit << "�F" << endl;

    return 0;
}
