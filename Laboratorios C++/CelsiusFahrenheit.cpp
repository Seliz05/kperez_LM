#include <iostream>
using namespace std;

int main()
{
    double celsius;
    double fahrenheit;
    
    cout <<"Ingrese la temperatura es grados Celsius: ";
    cin >>celsius;

    fahrenheit = celsius * 9/5 +32;

    cout <<"La temperatur ingresada en grados celsius es equivalente a "<< fahrenheit << " grados fahrenheit."<<endl;
    return 0;
}