
#include <iostream>
#include <cassert>

using namespace std;


void Swap2Ints(int*& Int1, int*& Int2) {

    int* Temp = Int1;				// I use * and & in these parameters because * is just part of the data type, unlike & which is more like an instruction
    Int1 = Int2;					// to the compiler. * is just saying that instead of an "int" data type it actually wants an "int pointer" data type, and
    Int2 = Temp;					// the & right after is telling the compiler that the logic in the function should modify the real int pointers it is being
									// fed, not just local copies of them like it would do otherwise which would only exist within the scope of the function.
}


int main()
{
    
	int A = 10, B = 20;				// Pointers aren't a "mechanic" like referencing, they are a unique data type that stores an address instead of a number or text
	int *AP = &A, *BP = &B;			// or true/false value. From here any logic that i want to be able to use a changeable input, i would give it *AP or *BP.

	cout << "A=" << *AP << "      " << "B=" << *BP << endl;

	Swap2Ints(AP, BP);

	cout << "A=" << *AP << "      " << "B=" << *BP << endl;

	assert(*AP == 20);
	assert(*BP == 10);

}
