/*Create a class student that stores roll_no,name.Create a class test that stores marks obtained in five subjects. Class result derived from student and test contains the total marks and percentage obtained in test. Input and display information of a student.*/

//Edited By: Het Shah


#include<iostream>
#include<string.h>
using namespace std;

class student				//creating student class
	{
		public:
		int roll_no;
		char name[20];
	};		//student class ends
class test		//creating test class
	{
		public:
			
		int marks[5];
		
	};		//test class ends here
class result : public student,public test		//result class inherited from student class nnd test class(Multiple Inheritence)
	{
		public:
		int total_marks;
		double percentage;
	};	//result class ends
int main()		//main method starts
	{
		int i;

		//student s1;
		//test t1;
		result r1;		//creating object of result class

		r1.roll_no=10;
		strcpy(r1.name,"Het");
		cout << "Enter marks of 5 subject" << endl;
		for(i=0;i<5;i++)	//for loop
			{
				cin >> r1.marks[i];
			}
		r1.total_marks=0;
		for(i=0;i<5;i++)	//for loop for summation of marks
			{
				r1.total_marks+=r1.marks[i];
			}
		cout << "Roll no= " << r1.roll_no << endl;		//printing roll_no
		cout << "Name=" << r1.name << endl;			//printing Name
		cout << "Total marks= " << r1.total_marks << endl;	//printing Total Marks
		r1.percentage=(double)r1.total_marks/5;			//calculating percentage
		cout << "Total percentage= " <<r1.percentage << endl;	//printing percentage 	
		
		return 0;
	}	//main method ends here
