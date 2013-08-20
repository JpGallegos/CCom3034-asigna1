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
		A[idx] = Fraction(rand() % 15 + 1, rand() % 15 + 1);
		// A[idx].print(); cout<<"\n";
		A[idx].reduce();
		// A[idx].print(); cout<< "\n ----- \n";
		frac_count++;
	}

}

int ArrayOfFractions::getArraySize()const {
	return frac_count;
}

void ArrayOfFractions::sortAscending() {
	int minElemPos;
	Fraction tempFrac;

	for (int j=0; j<frac_count-1; j++) {
		minElemPos = j;

		for (int i=j+1; i<frac_count; i++) {
			if ( A[minElemPos].gt(A[i]) ) {
				minElemPos = i;
			}
		}
		if (minElemPos != j) {
			tempFrac = A[j];
			A[j] = A[minElemPos];
			A[minElemPos] = tempFrac; 
		}
	}
}

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

