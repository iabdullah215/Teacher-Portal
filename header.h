#include<string>

class Student
{
	private:
		
		std::string name;
		std::string surname;
		int roll_number;
		int quiz1_marks;
		int assignment1_marks;
		int exam_marks;
			
	public:
		
		Student();
		~Student();
		void setname(std::string name);
		void setsurname(std::string surname) ; 
		void setroll_number(int roll_number) ; 
		void setquiz1_marks(int quiz1_marks) ; 
		void setassignment1_marks(int assignment1_marks) ;
		void setexam_marks(int exam_marks) ;
		std::string getname();
		std::string getsurname(); 
		int getroll_number(); 
		int getquiz1_marks(); 
		int getassignment1_marks();
		int getexam_marks();
		bool pass();
		char getGrade();
};
