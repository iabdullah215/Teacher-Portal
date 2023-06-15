#include "header.h"
#include<string>

Student::Student()
{
	name = "N/A";
	surname = "N/A";
	roll_number = 00;
	quiz1_marks = 00;
	assignment1_marks = 00;
	exam_marks = 00;
}
Student::~Student(){}; 
std::string Student::getname() 
{ 
	return name;
}
std::string Student::getsurname()
{
	return surname;
}
int Student::getroll_number()
{
	return roll_number;
}
int Student::getquiz1_marks() 
{
	return quiz1_marks;
}
int Student::getassignment1_marks()
{
	return assignment1_marks;
}
int Student::getexam_marks()
{
	return exam_marks;
}

void Student::setname(std::string name) 
{
	this -> name = name;
}
void Student::setsurname(std::string surname) 
{
	this -> surname = surname;
}
void Student::setroll_number(int roll_number)  
{
	this -> roll_number = roll_number;
}
void Student::setquiz1_marks(int quiz1_marks) 
{
	this -> quiz1_marks = quiz1_marks;
} 
void Student::setassignment1_marks(int assignment1_marks) 
{
	this -> assignment1_marks = assignment1_marks;
}
void Student::setexam_marks(int exam_marks) 
{
	this -> exam_marks = exam_marks;
}
bool Student::pass()
{
	float total_marks = (0.25*quiz1_marks) + (0.25*assignment1_marks) + (0.5*exam_marks);
	if(total_marks >= 40)
	{
		return true;
	}
	else
	{
		return false;
	}
}
char Student::getGrade()
{
	int total_marks = (0.25*quiz1_marks) + (0.25*assignment1_marks) + (0.5*exam_marks);
	if(total_marks <= 100 && total_marks >= 70)
	{
		return 'A';
	}
	else if(total_marks <= 69 && total_marks >= 55)
	{
		return 'B';
	}
	else if(total_marks <= 54 && total_marks >= 45)
	{
		return 'C';
	}
	else if(total_marks <= 44 && total_marks >= 40)
	{
		return 'D';
	}
	else if(total_marks <= 39 && total_marks >= 00)
	{
		return 'F';
	}
}
