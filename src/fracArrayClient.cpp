#include <iostream>
#include "fracArray.h"
using namespace std;
 
int main() {
    ArrayOfFractions L;
 
    cout << "Contenido de L:" << endl;
    L.print();
 
    cout << "Maximo, minimo y suma de elementos en L" << endl;
    L.max().print(); cout<< '\n';
    L.min().print(); cout<< '\n';
    L.sum().print(); cout<< '\n';
 
 
    L.sortAscending();
    cout << "Contenido de L, luego de ordenado:" << endl;
    L.print();
    
    return 0;
}