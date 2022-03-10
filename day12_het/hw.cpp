// Create a class student having private members marks, name and public
// members rollno, getdata(), printdata(). Demonstrate concept of pointer to
// class members for array of 3 objects.



#include<iostream>
#include<string.h>
using namespace std;

class student
	{
		int marks;
		char name[50];

		public:
		int roll_no;

		void getdata(int roll_no,char name[],int marks)
			{
				this->roll_no=roll_no;
				strcpy(this->name,name);
				this->marks=marks;
			}
		void printdata()
			{
				cout << "Roll no= "<< roll_no << endl;
				cout << "Name= " << name << endl;
				cout << "Marks= " << marks << endl;
			}
	};

int main()
	{
		int roll_no,marks;
		char name[50];
		student s[3],*ptr;
		ptr=s;
		int i;
		for(i=0;i<3;i++)
			{
				cout << "Enter roll no, name and marks of student" << i+1 << endl;
				cin >> roll_no >> name >> marks;
				ptr->getdata(roll_no,name,marks);
				ptr++;
			}
		ptr=s;
		for(i=0;i<3;i++)
			{
				cout << "Data of student " << i+1 << endl;
				ptr->printdata();
				ptr++;
			}

		return 0;
	}
