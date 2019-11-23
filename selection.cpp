#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include "Header.h"

using namespace std;

void selection()
{
	mt19937 rng;
	rng.seed(random_device()());
	uniform_int_distribution<std::mt19937::result_type> distrForPrizes(0, 23);
	//adding the files into the program
	//"prizes1" contains the first 24 prizes
	ifstream prizes("prizes1.txt", ios::in);
	ifstream student_names("studentNames.txt", ios::in);
	ifstream winners("prizeWinners.txt", ios::out | ios::app);
	vector<string> prizeVector; 
	vector<string> studentNameVector; 
	vector<string> prizeWinnerVector; 
	string line; 
	string tempPrizeArray[4]; 
	string tempStudentArray[4];

	//check if files are valid before proceeding; print some kind of message if there's an error
	if (!prizes || !student_names || !winners)
	{
		cout << "One of the files could not be located." << endl;
	}

	else
	{
		while (getline(prizes, line))
		{
			if (line.size() > 0)
			{
				prizeVector.push_back(line);
				cout << line << endl; 
			}
		}

		while (getline(student_names, line))
		{
			if (line.size() > 0)
			{
				studentNameVector.push_back(line);
				cout << line << endl;
			}
		}

		uniform_int_distribution<std::mt19937::result_type> distrForAttendees(0, studentNameVector.size());

		while (getline(winners, line))
		{
			if (line.size() > 0)
			{
				prizeWinnerVector.push_back(line);
				cout << line << endl;
			}
		}

		//find 5 random winners
		for (int i = 0; i < 4; i++)
		{
			//tempStudentArray[i] = studentNameVector[distrForAttendees];
			tempStudentArray[i] = studentNameVector
			cout << tempStudentArray[i] << endl;

		}


		//step 1: prizeVector[distrForPrizes]; 
		//step 2: check if the called prize is in the temp array
		//step 3: if not, add called prize to temp array
		//step 4: call the next random number

		//check winner name against the 'prizeWinners' file; if it's there, delete name from 'studentNames' folder & pick another name. Test again, until name is no longer a duplicate
		//write their names into the 'prizeWinners' file
		//delete their names from the 'studentNames' file

		//find 5 random prizes
		//write the prize into the 'prizeWinners' file
		//delete the prize from the 'prizes' file

		//write vectors into files

		//close files
		prizes.close();
		student_names.close();
		winners.close();

		//return 5 winners & 5 prizes
	}
}