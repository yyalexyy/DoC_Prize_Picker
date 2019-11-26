#include "Header.h"
#include <iostream>
#include <string>
#include <ctime>

void selection();

using namespace std;

int main()
{
	// Get the system time
	unsigned seed = time(0);

	// Seed the random number generator
	srand(seed);
	

	//call the selection() function
	selection();

	cout << "\nmain";

	//print out 5 random students from student_names
	//print out 5 random prizes from prizes
}