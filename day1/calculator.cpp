#include<iostream>
#include<cmath>
using namespace std;

class Calculator
	{
		public:
		    int input1;
		    int input2;

		void setInput(int a,int b)
			{
				input1=a;
				input2=b;
			}
		int add(Calculator obj1,Calculator obj2)
			{
				return obj1.input1 + obj2.input1;
			}

		int subtract(Calculator, Calculator);
		 int multiply()
			{	
			return input1 * input2;
			}

		//divide() function returns the division of two numbers

		float divide()
			{
			return (float)input1 / (float)input2;
			}

		//modulo() function returns the modulo of two numbers

		int modulo()
			{
			return input1 % input2;
			}
		int power()
			{
			return pow(input1, input2);
			}	
	};
 Calculator::subtract(Calculator n1, Calculator n2)
{
	Calculator n;
	n.input1 = n1.input1 - n2.input2;
	return n;
}
int main()
	{
		Calculator obj,obj2,obj3;
		int op=0, n1, n2;
		
		while(op<7)
	{
		cout << endl << "Enter 1 for addition: " << endl << "Enter 2 for subtraction: " << endl << "Enter 3 for multiplication: " << endl << "Enter 4 for division: " << endl << "Enter 5 for modulo: " << endl << endl <<   "Enter 6 for x^y: " << endl << "Enter 7 for exit: " << endl ;
		cout << "Enter operation : ";
		cin >> op;

		switch(op)
		{
			case 1:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj2.setInput(n1, n2);
			obj.setInput(n1, n2);
			cout << "Addition of " << n1 << " and " << n2 << " is: " << obj.add(obj, obj2) << endl;
			break;

			case 2:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj2.setInput(n1, n2);
			obj.setInput(n1, n2);
			obj3 = obj.subtract(obj, obj2);
			cout << "Subtraction of " << n1 << " and " << n2 << " is: " << obj3.input1 << endl;
			break;

			case 3:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Multiplication of " << n1 << " and " << n2 << " is: " << obj.multiply() << endl;
			break;

			case 4:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Division of " << n1 << " and " << n2 << " is: " << obj.divide() << endl;
			break;

			case 5:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Modulo of " << n1 << " and " << n2 << " is: " << obj.modulo() << endl;
			break;

			case 6:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Power of " << n1 << " rest to " << n2 << " is: " << obj.power() << endl;
			break;
		

	      
		return 0;
	}
    }
}
