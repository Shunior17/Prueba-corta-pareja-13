#include <iostream>
using namespace std;
int main() {
    //MULTIPLOS DE 5 Y 7

    int num;
    cout<<"Ingrese un numero";
    cin>>num;
    if (num%5==0){
        cout<<"El numero "<<num<<" es multiplo de 5"<<endl;
        int multiplo;
        multiplo=num/5;
                cout<<"El multiplo de 5 para ese numero es "<<multiplo<<endl;
    } else if (num%7==0){
        cout<<"El numero "<<num<<" es multiplo de 7"<<endl;
        int multiplo;
        multiplo=num/7;
        cout<<"El multiplo de 7 para ese numero es "<<multiplo<<endl;
    } else{
        cout<<"El numero que se ingreso no es multiplo de 5 o 7"<<endl;
    }
}
