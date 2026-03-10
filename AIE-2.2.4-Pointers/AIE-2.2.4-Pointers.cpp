
#include <iostream>
#include <cassert>

using namespace std;


void PointerSwap(int*& Int1, int*& Int2) {

    int* Temp = Int1;				// I use * and & in these parameters because * is just part of the data type, unlike & which is more like an instruction
    Int1 = Int2;					// to the compiler. * is just saying that instead of an "int" data type it actually wants an "int pointer" data type, and
    Int2 = Temp;					// the & right after is telling the compiler that the logic in the function should modify the real int pointers it is being
									// fed, not just local copies of them like it would do otherwise which would only exist within the scope of the function.
}

void ValueSwap(int* Int1, int* Int2) {

	int Temp = *Int1;				// I misunderstood what the question was asking of me and when this way was originally giving me some difficulty, i started
	*Int1 = *Int2;					// to think about how pointers could be used in a similar to "Value Switches" in a game i play (like a switch but for data
	*Int2 = Temp;					// rather than executions) and assumed that must be what it was wanting from me, and learned how to make the function above.
									// Just in case i have left and tested for both.
}


int main()
{
    
	int A = 10, B = 20;				// Pointers aren't a "mechanic" like referencing, they are a unique data type that stores an address instead of a number or text
	int *Apoint = &A, *Bpoint = &B;			// or true/false value. From here any logic that i want to be able to use a changeable input, i would give it *AP or *BP.

	cout << "Pointer Swap\nAP=" << *Apoint << "      " << "BP=" << *Bpoint << endl;

	PointerSwap(Apoint, Bpoint);

	cout << "AP=" << *Apoint << "      " << "BP=" << *Bpoint << endl;

	assert(*Apoint == 20);
	assert(*Bpoint == 10);


	int C = 30, D = 40;
	int *Cpoint = &C, *Dpoint = &D;

	cout << "\nValue Swap\nC=" << C << "      " << "D=" << D << endl;

	ValueSwap(Cpoint, Dpoint);

	cout << "C=" << C << "      " << "D=" << D << endl;

	assert(C == 40);
	assert(D == 30);

}
