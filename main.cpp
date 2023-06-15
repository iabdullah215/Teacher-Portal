#include <iostream>
#include "header.h"
using namespace std;

int main()
{
	int op, max, roll_no, quiz1_marks, assignment1_marks, exam_marks;
	string name, surname;
	 
	cout << " S T U D E N T  M A N A G E M E N T  S Y S T E M " << endl;
	
	cout << "ENTER NUMBER OF STUDENTS: ";
	cin >> max;
	
	Student * students = new Student[max]; // dynamic memory allocation
	while(op !=5)
	{
		cout << endl;
		cout << "                 M A I N  M E N U              " << endl;
		cout << " [1] ADD A STUDENT " << endl;
		cout << " [2] VIEW DETAIL OF A STUDENT " << endl;
		cout << " [3] CHECK WEATHER THE STUDENT IS PASS OR FAIL " << endl;
		cout << " [4] VIEW GRADE " << endl;
		cout << " [5] EXIT " << endl << endl;
		cout << "ENTER YOUR OPTION: ";
		cin >> op;
		cout << endl;
	
		switch(op)
		{
			case 1:
				{
					cout << "             A D D  A  S T U D E N T             " << endl;
				
					cout << "ENTER STUDENT ROLL NUMBER: ";
					cin >> roll_no;
					if (roll_no > 0 && roll_no <= max)
					{
						cout << "ENTER STUDENT NAME: ";
                    	cin >> name;
                    	cout << "ENTER STUDENT SURNAME: ";
                    	cin >> surname;
                    	cout << "ROLL NUMBER OF THE STUDENT IS: ";
                    	cout << roll_no << endl;
                    	cout << "ENTER QUIZ [1] MARKS: ";
                    	cin >> quiz1_marks;
                    	cout << "ENTER ASSIGNMENT [1] MARKS: ";
                    	cin >> assignment1_marks;
                    	cout << "ENTER EXAM MARKS: ";
                    	cin >> exam_marks;
                    	students[roll_no-1].setname(name);
                    	students[roll_no-1].setsurname(surname);
                    	students[roll_no-1].setroll_number(roll_no);
                   		students[roll_no-1].setquiz1_marks(quiz1_marks);
						students[roll_no-1].setassignment1_marks(assignment1_marks);
						students[roll_no-1].setexam_marks(exam_marks);
						cout << endl; 
						cout << " S T U D E N T  A D D E D  S U C C E S S F U L L Y " << endl;
					}
					else
					{
						cout << "[ ERROR ] INVALID ROLL NUMBER" << endl;
					}
					break;
				}
			case 2:
				{
					cout << "          S T U D E N T  D E T A I L S           " << endl;
				
					cout << "ENTER STUDENT ROLL NUMBER: ";
					cin >> roll_no;
					if (roll_no > 0 && roll_no <= max)
					{
						cout << "NAME: " << students[roll_no-1].getname() << endl;
                		cout << "SURNAME: " << students[roll_no-1].getsurname() << endl;
             	   		cout << "ROLL NUMBER: " << students[roll_no-1].getroll_number() << endl;
                		cout << "QUIZ [1] MARKS: " << students[roll_no-1].getquiz1_marks() << endl;
                		cout << "ASSIGMENT [1] MARKS: " << students[roll_no-1].getassignment1_marks() << endl;
                		cout << "EXAM MARKS: " << students[roll_no-1].getexam_marks() << endl;
					}
					else
					{
						cout << "[ ERROR ] INVALID ROLL NUMBER" << endl;
					}
					break;
				}
			case 3:
			{
				cout << "                P A S S / F A I L               " << endl;
				
				cout << "ENTER STUDENT ROLL NUMBER: ";
				cin >> roll_no;
				if (roll_no > 0 && roll_no <= max)
				{
					bool final = students[roll_no-1].pass();
					if(final)
					{
						cout << endl;
						cout << "     P A S S   " << endl << endl;
						cout << " CONGRATULATIONS " << endl;
					}
					else
					{
						cout << endl;
						cout << "           F A I L " << endl << endl;
						cout << "     BETTER LUCK NEXT TIME " << endl;
					}
				}
				else
				{
					cout << "[ ERROR ] INVALID ROLL NUMBER" << endl;
				}
				break;
			}
		case 4:
			{
				cout << "               V I E W  G R A D E                " << endl;
				
				cout << "ENTER STUDENT ROLL NUMBER: ";
				cin >> roll_no;
				if (roll_no > 0 && roll_no <= max)
				{
					char grade = students[roll_no-1].getGrade();
					cout << "YOUR GRADE IS: ";
					cout << grade;
				}
				else 
				{
					cout << "[ ERROR ] INVALID ROLL NUMBER" << endl;
				}
				break;
			}
		case 5:
			{
				cout << "                 T H A N K S               " << endl;				
				break;
			}
		default:
			{
				cout << "[ ERROR ] INVALID ENTRY" << endl;
				cout << "-------------------------------------------------------" << endl << endl;

			}
		}
	}
}
