#include <iostream>
#include <conio.h>

using namespace std;
void mostrarportada ();

int main()
{
   mostrarportada ();
   int num1 = 0;
   int num2 = 0;
   cout<<"Ingrese el primer numero a calcular"<<endl;
   cin>>num1;
   cout<<"ingrese el segundo numero a calcular"<<endl;
   cin>>num2;
   cout<<"la suma de los numeros es: " <<num1 + num2 <<endl;
   cout<<"la resta de los numeros es: " <<num1 - num2 <<endl;
   cout<<"la multiplicacion de los numeros es: " <<num1 * num2 <<endl;
   cout<<"la division de los numeros es: " <<num1 / num2 <<endl;
return 0;
}
void mostrarportada ()
{
 cout<<"*************************************"<<endl;
 cout<<"*PROGRAMADO POR: CARLOS HERNANDEZ   *"<<endl;
 cout<<"*PROGRAMA CALCULADORA               *"<<endl;
 cout<<"*************************************"<<endl;
 }
