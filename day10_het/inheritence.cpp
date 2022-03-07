//This is C++ programme to demonstrate Inheritence
//Edited By; Het Shah



#include<iostream>

using namespace std;
class person				//class person()base class
	{
		public:			//public attributes
		int weight=65,age;

		//protected:
		//int height=5;
		
		public:			
			void walk()		//walk() function
				{
					cout << "Person walks" << endl;
					cout << "Inside public" << endl;
				}	
			void talk()		//talk() function
				{
					cout << "Person talks" << endl;
					cout << "Inside public" << endl;
				}
			void run()		//run() function
				{
					cout << "Person runs" << endl;
					cout << "Inside public" << endl;
				}
		/*protected:
			void eat()
				{
					cout << "Person eats" << endl;
					cout << "Inside protected" << endl;
				} */
		/*private:
			void sleep()
				{
					cout << "Person sleeps" << endl;
					cout << "Inside private" << endl;	
				} */
	};		//class person ends here
class doctor : public person		//doctor class(child class of person class)
	{
		public:		
			void diagnose()		//diagnose() method
				{
					cout << "Doctor diagnoses" << endl;
				}
			
	};		//doctor class ends here

int main()
	{		//main method starts
		doctor d1;		//creating object of doctor class
		d1.walk();		//invoking parent class method from child class object
		d1.talk();		//invoking parent class method from child class object
		d1.run();		//invoking parent class method from child class object
		d1.diagnose();		
		

		cout << "weight= " d1.weight << endl;		//accesing parent class attribute from child class object

		return 0;
	}		//main method ends here
