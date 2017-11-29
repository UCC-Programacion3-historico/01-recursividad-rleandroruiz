//
// Created by alumno on 20/09/17.
//

#include <iostream>

using namespace std;

int multiplicacion(int , int);
int cociente(int, int);
int factorial(int);
float raiz(float, float);

int binaria(int);
string hexadecimal(int);
int octal(int);


main(){

    int x, y;
    cout << "Ingrese dos numeros" << endl;
    cin >> x >> y;
    cout << "Su producto es: " << multiplicacion(x, y) << endl;
    cout << "Su cociente es: " << cociente(x, y) << endl;
    cout << "El factorial de a es: " << factorial(x) << endl;
    cout << "La raiz cuadrada de a es: " << raiz(x, x) << endl;
    cout << "La notación binaria de a es: " << binaria(x) << endl;
    cout << "La notación hexadecimal de a es: " << hexadecimal(x) << endl;
    cout << "La notación octal de a es: " << octal(x) << endl;

    return 0;
}

int multiplicacion(int a, int b){

    if(b == 1)
        return a;

    return multiplicacion(a, b-1) + a;

}

int cociente(int a, int b){

    if(a < b)
        return 0;

    return cociente(a - b, b) + 1;

}

int factorial(int a){

    if(a == 1 || a == 0)
        return 1;

    return factorial(a - 1) * a;

}

// b = (1 / 2) * ((a / b) + b));


float raiz(float x, float t){

    if (t*t == x) {
        return t;
    }
    else{
        return raiz(x, ((x / t) + t) / 2);
        }
}

int binaria(int a){

    if (a == 0)
        return 0;
    a = a % 2 + binaria(a / 2) * 10;
    return a;

}

string hexadecimal(int a){

    string t;
    int tmp;
    if(a == 0)
        return "";
    else{
        switch(a % 16) {
            case 10: {
                t = 'A';
                break;
            }
            case 11:{
                t = 'B';
                break;
            }
            case 12:{
                t = 'C';
                break;
            }
            case 13:{
                t = 'D';
                break;
            }
            case 14:{
                t = 'E';
                break;
            }
            case 16:{
                t = 'F';
                break;
            }
            default:{
                tmp = a % 16;
                t = static_cast<char>(tmp);
            }

        }
        t = t + hexadecimal(a/16);
        return t;
    }

}

int octal(int a){

    if (a == 0)
        return 0;

    return a % 8 + octal(a / 8) * 10;

}

