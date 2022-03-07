//This is C++ programme to demonstrate Hybrid Inheritence

//Edited By: Het Shah


#include<iostream>
using namespace std;

    //     A                                    Car
    //     |                                     |
    //     ^        Hydrid Inheritance           ^
    // B       C                        Fuelcar    Electriccar
    //     D                                  Hybridcar

class car		//defining car class
	{
		public:
		void fun1()
			{
				cout << "Hello, I am car" << endl;
			}
	};		//class car ends
class FuelCar : public car	//FuelCar class inherited from car class
	{
		public:
		void fun2()
			{
				cout << "fuel car runs with fuel" << endl;
			}
	};	//FuelCar class ends here
class ElectricCar : public car	// ElectricCar class inherited from car class
	{
		public:
		void fun3()
			{
				cout << "Electric car runs with electricity" << endl;
			}
	};	//Electric car class ends here
class HybridCar : public FuelCar,public ElectricCar		//HybridCar class inherited from both FuelCar,ElectricCar
	{
		public:
		void fun4()
			{
				cout << "Hybrid car runs with both fuel and electricity" << endl;
			}
	};	//HybridCar ends here

int main()		//main method starts
	{
		HybridCar h;	//creating object of HybridCar
		h.fun4();	
		h.fun2();	//Invoking parent class method from child class object
		h.fun3();	//Invoking parent class method from child class object
		

		return 0;
	}
