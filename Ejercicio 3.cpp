
#include <iostream>

using namespace std;

int main()
{
    cout<<"============================================"<< endl;
    cout<<"Ingrese el monto de dinero que desee retirar"<< endl;
    cout<<"============================================"<< endl;
    
 
    int Dinero, sobra;
    
    cout<<"Ingrese la cantidad de Dinero: ";
    cin >> Dinero;
    
    sobra = Dinero / 100;
    Dinero%= 100;
    cout << "["<<sobra<<"] Billetes de 100$ \n ";
    
    sobra = Dinero / 50;
    Dinero%= 50;
    cout << " ["<<sobra<<"] Billetes de 50$ \n ";
    
    sobra = Dinero / 20;
    Dinero%= 20;
    cout << " ["<<sobra<<"] Billetes de 20$ \n ";
    
    sobra = Dinero / 10;
    Dinero%= 10;
    cout << " ["<<sobra<<"] Billetes de 10$ \n ";
    
    sobra = Dinero / 5;
    Dinero%= 5;
    cout << " ["<<sobra<<"] Billetes de 5$ \n ";
    
    sobra = Dinero / 1;
    Dinero%= 1;
    cout << " ["<<sobra<<"] Billetes de 1$ \n "<< endl;
    
    cout<<"Gracias por eligir Bank of America"<< endl;
    

    return 0;
}