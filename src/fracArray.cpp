#include "fracArray.h"
#include "frac.h"		
#include <stdlib.h>     // srand, rand
#include <time.h>		// time

ArrayOfFractions::ArrayOfFractions() {

	srand(time(NULL));

	for(int idx=0, frac_count=0; idx<ARRAY_SIZE; idx++, frac_cout++) {
		A[idx] = Fraction(rand() % 30, rand() % 30 + 1);
	}

}

ArrayOfFractions::~ArrayOfFractions() {}

int ArrayOfFractions::getArraySize()const {
	return (int)(sizeof A / sizeof(Fraction));
}

void ArrayOfFractions::sortAscending() {}

void ArrayOfFractions::print()const {}

Fraction ArrayOfFractions::min()const {}

Fraction ArrayOfFractions::max()const {}

Fraction ArrayOfFractions::sum()const {}

