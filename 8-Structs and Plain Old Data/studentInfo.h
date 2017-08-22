#pragma once

struct studinfo
{
	int studentId[5];
	int studentCourse[5];
	int studentExam[5];
	//int storeLoop[];

};

//struct student {};
//
//struct classroom
//{
//	student students[10];
//
//	int studentCount;		// 10
//	int studentMax;			// 10
//
//	bool addStudent(student newStudent);	// success/failure
//};
//
//void addStudent(classroom &classroom);
//void storeStudentInfo(studinfo stud);
void Storeloop(studinfo& stud);
void printStudentInfo(studinfo stud);
int findTestAvg(studinfo stud);
int findTestMed(studinfo stud);
int findEnrolled(studinfo stud);