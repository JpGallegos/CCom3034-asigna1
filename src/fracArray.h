#include "frac.h"

#ifndef FRACARRAY_H
#define FRACARRAY_H
#define ARRAY_SIZE 10

class ArrayOfFractions {
	private:
		Fraction A[ARRAY_SIZE];
		int frac_count;
	public:
		ArrayOfFractions();
		~ArrayOfFractions();

		int getSize()const;

		void sortAscending();
		void print()const;

		Fraction min()const;
		Fraction max()const;
		Fraction sum()const;
};
#endif