#include <iostream>
#include "fracArray.h"
using namespace std;
 
int main() {
    ArrayOfFractions L;
 
    cout << "Contenido de L:" << endl;
    L.print();
 
    // cout << "Maximo, minimo y suma de elementos en L" << endl;
    // L.max().print();
    // L.min().print();
    // L.sum().print(); 
 
 
    L.sortAscending();
    cout << "Contenido de L, luego de ordenado:" << endl;
    L.print();
    
    return 0;
}