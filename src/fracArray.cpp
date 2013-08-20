#include "fracArray.h"
#include "frac.h"	
#include <iostream>	
#include <stdlib.h>     // srand, rand
#include <time.h>		// time
using namespace std;

ArrayOfFractions::ArrayOfFractions() {

	srand(time(NULL));
	frac_count = 0;

	for(int idx=0; idx<ARRAY_SIZE; idx++) {
		A[idx] = Fraction(rand() % 30, rand() % 30 + 1);
		A[idx].reduce();
		frac_count++;
	}

}

int ArrayOfFractions::getArraySize()const {
	return frac_count;
}

void ArrayOfFractions::sortAscending() {}

void ArrayOfFractions::print()const {
	cout<< "[";
	for(int idx=0; idx<frac_count; idx++) {
		if (idx == frac_count-1){
			A[idx].print();
		} else {
			A[idx].print(); cout<<", ";
		}
	}
	cout<<"]\n";
}

Fraction ArrayOfFractions::min()const {}

Fraction ArrayOfFractions::max()const {}

Fraction ArrayOfFractions::sum()const {}

