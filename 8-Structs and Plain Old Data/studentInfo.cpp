#include "studentInfo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void Storeloop(studinfo& stud)
{

	bool exit = false;
	int i = 0;
	cout << "Enter the info of 10 students\n" << endl;
	while (exit == false)
	{
		cout << "Students #" << i + 1 << endl;
		
		cout << "Student ID     :";
		cin >> stud.studentId[i];
		cout << "Enrolled Course:";
		cin >> stud.studentCourse[i];
		cout << "Last Exam      :";
		cin >> stud.studentExam[i];
		i++;
		if (i == 5)
		{
			exit = true;
		}


	}
}
void printStudentInfo(studinfo stud)
{

	for (int i = 0; i < 5; i++)
	{
		cout << "Student ID         #" << i << ":" << stud.studentId[i] << endl;
		cout << "Enrolled Course    #" << i << ":" << stud.studentCourse[i] << endl;
		cout << "Last Exam          #" << i << ":" << stud.studentExam[i] << endl;
	}

}

int findTestAvg(studinfo stud)
{
	int TestAvg = 0;
	
	for (int i = 0; i < 5; i++)
	{
		TestAvg += stud.studentExam[i];
	}


	return TestAvg / 5;
}

int findTestMed(studinfo stud)
{
	int swapnum;
	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (stud.studentExam[j] > stud.studentExam[j + 1])
			{
				swapnum = stud.studentExam[j];
				stud.studentExam[j] = stud.studentExam[j + 1];
				stud.studentExam[j + 1] = swapnum;
			}
		}
	}
	return stud.studentExam[2];
}

int findEnrolled(studinfo stud)
{
	int userInput;
	cin >> userInput;
		int setnum = 0;
		int numEnrolled = 0;
		for (int i = 0; i < 5; i++)
		{

			for (int x = 1; i + x < 1; x++)
			{
				if (stud.studentExam[i] == stud.studentExam[userInput])
				{
					numEnrolled += 1;
				}
			}
	}
		return numEnrolled;
}


