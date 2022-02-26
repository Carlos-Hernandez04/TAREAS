#include<iostream>
using namespace std;

int main()
{
int notafinal;

cout<<"INGRESE LA NOTA FINAL DEL CURSO: ";
cin>>notafinal;

if (notafinal <= 60){
cout<<"LA NOTA FINAL ES: "<<notafinal<< " REPROBASTE SUERTE A LA PROXIMA "<<endl;
}
if (notafinal >= 61){
cout<<"LA NOTA FINAL ES: "<<notafinal<< " APROBASTE POR UN PELO "<<endl;
}
if (notafinal >= 70 && notafinal <= 90){
cout<<"LA NOTA FINAL ES: "<<notafinal<< " APROBASTE CON BUENA NOTA"<<endl;
}
else
if (notafinal >= 91 && notafinal <= 100){
cout<<"LA NOTA FINAL ES: "<<notafinal<< " APROBASTE CON UNA EXCELENTE NOTA";
}
return 0;
}
