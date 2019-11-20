#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;

void selection()
{
	//adding the files into the program
	//"prizes1" contains the first 24 prizes
	ifstream prizes("prizes1.txt", ios::in);
	ifstream student_names("studentNames.txt", ios::in);
	ifstream winners("prizeWinners.txt", ios::out | ios::app);

	//check if files are valid before proceeding; print some kind of message if there's an error

	//find 5 random winners
	//check winner name against the 'prizeWinners' file; if it's there, delete name from 'studentNames' folder & pick another name. Test again, until name is no longer a duplicate
	//write their names into the 'prizeWinners' file
	//delete their names from the 'studentNames' file

	//find 5 random prizes
	//write the prize into the 'prizeWinners' file
	//delete the prize from the 'prizes' file

	//close files
	prizes.close();
	student_names.close();
	winners.close();

	//return 5 winners & 5 prizes
}