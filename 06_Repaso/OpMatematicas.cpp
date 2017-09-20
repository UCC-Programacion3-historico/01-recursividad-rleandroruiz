//
// Created by alumno on 20/09/17.
//

#include <iostream>

using namespace std;

int multiplicacion(int , int);
int cociente(int, int);
int factorial(int);
float raiz(float, int);

int binaria(int);


//main(){
//
//    int x, y;
//    cout << "Ingrese dos numeros" << endl;
//    cin >> x >> y;
//    cout << "Su producto es: " << multiplicacion(x, y) << endl;
//    cout << "Su cociente es: " << cociente(x, y) << endl;
//    cout << "El factorial de a es: " << factorial(x) << endl;
//    cout << "La raiz cuadrada de a es: " << raiz(x, 5) << endl;
//    cout << "La notación binaria de a es: " << binaria(x) << endl;
//
//    return 0;
//}

int multiplicacion(int a, int b){

    if(b == 1)
        return a;

    return multiplicacion(a, b-1) + a;

}

int cociente(int a, int b){

    if(a == b)
        return 1;

    return cociente(a - b, b) + 1;

}

int factorial(int a){

    if(a == 1 || a == 0)
        return 1;

    return factorial(a - 1) * a;

}

// b = (1 / 2) * ((a / b) + b));


float raiz(float x, int n){

    if (n == 0)
        return x;

    else return (1 / 2) * ( x / raiz(x,n-1) + raiz(x,n-1));

}

int binaria(int a){

    if (a == 0)
        return 0;

    return a % 2 + binaria(a / 2) * 10;

}

