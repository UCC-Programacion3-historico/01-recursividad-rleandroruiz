#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b) {
    if(a < b)
        return 0;
    return cociente(a-b, b) + 1;

}


unsigned int resto(unsigned int a, unsigned int b) {
    if(a < b)
        return a;
    return resto(a-b, b);
}


void escribir_espaciado(unsigned int num) {
    if(cociente(num,10) == 0) {
        cout << num << " ";
    }else {
        escribir_espaciado(cociente(num, 10));
        cout << resto(num, 10) << " ";
    }

}
