#include<iostream>
using namespace std;

int main(){

    float valor1, valor2,  resultado;
    int opcion;

    do{
        cout<<"********************CALCULADORA EN C++********************"<<endl;
        cout<<"1- SUMA"<<endl;
        cout<<"2- RESTA"<<endl;
        cout<<"3- MULTIPLICACION"<<endl;
        cout<<"4- DIVISION"<<endl;
        cout<<"5- SALIR"<<endl;
        cin>>opcion;


        if(opcion!=5){
            cout<<"Ingrese el primer numero:";
            cin>>valor1;
            cout<<"Ingrese el segundo numero:";
            cin>>valor2;
        }
   
        switch (opcion)
        {
        case 1: 
            resultado=valor1+valor2;
            cout<<"El resultado es:  "<<resultado<<endl;
            break;
        case 2:
            resultado=valor1-valor2;
            cout<<"El resultado es:  "<<resultado<<endl;
            break;
        case 3:
            resultado=valor1*valor2;
            cout<<"El resultado es:  "<<resultado<<endl;
            break;
        case 4:
            resultado=valor1/valor2;
            cout<<"El resultado es:  "<<resultado<<endl;
            break;
        case 5:
            break;
        }
   
    } while(opcion!=5);

 
}