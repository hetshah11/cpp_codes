#include <iostream>
#include<cmath> //including cmath library file
using namespace std;
class calculator    //create class calculaor
    {
      int input1,input2;     //create 2 private integer type variables
      
      public:			// create 6 public class functions
            void setInput(int a,int b)
                {
                    input1=a;
                    input2=b;
                }
            int add()
                {
                    return input1+input2;
                }
	    int sub()
		{
			return input1-input2;
		}
	    int mul()
		{
			return input1*input2;
		}
	    double div();     //function definition is outside class
	    int modulo()
		{
			return input1%input2;
		}
	    int power(calculator obj)    //object is passed as argument
		{
			return pow(obj.input1,obj.input2);
		}
    };// class calculor finished
double calculator :: div()            // class method outside class using scope specifier
	{
		return (float)input1/(float)input2;
	}

int main()
{
    int ch,a,b;
    calculator obj;  // crated 2 objects of class calcultor
   while(ch!=7)   //while loop starts
	{  
    cout << "press 1 for addition" << endl << "press 2 for substraction" << endl<< "press 3 for multiplication" << endl<< "press 4 for division" << endl<< "press 5 for modulo" << endl<< "press 6 for power" << endl;
    
    cout << "Enter choice" <<endl;
    cin >> ch;
	switch(ch)
		{
			case 1:   
    				  
    				  cout << "Enter 2 values" << endl;
    				  cin >> a;
    				  cin >> b;
    				  obj.setInput(a,b);
    				  cout << "Sum of " << a << " and " << b << " is " <<obj.add(); << endl;
				  break;

			case 2:   
    				  
    				  cout << "Enter 2 values" << endl;
    				  cin >> a;
    				  cin >> b;
    				  obj.setInput(a,b);
    				  cout << "diffrence " << a << " and " << b << " is " <<obj.sub(); << endl;
				  break;

			case 3:   
    				  
    				  cout << "Enter 2 values" << endl;
    				  cin >> a;
    				  cin >> b;
    				  obj.setInput(a,b);
    				  cout << "multiplication of " << a << " and " << b << " is " <<obj.mul(); << endl;
				  break;

			case 4:   
    				  
    				  cout << "Enter 2 values" << endl;
    				  cin >> a;
    				  cin >> b;
    				  obj.setInput(a,b);
    				  cout << "division of " << a << " and " << b << " is " <<obj.div(); << endl;
				  break;

			case 5:   
    				  
    				  cout << "Enter 2 values" << endl;
    				  cin >> a;
    				  cin >> b;
    				  obj.setInput(a,b);
    				  cout << "modulus of " << a << " and " << b << " is " <<obj.modulo(); << endl;
				  break;

			case 6:   
    				  
    				  cout << "Enter 2 values" << endl;
    				  cin >> a;
    				  cin >> b;
    				  obj.setInput(a,b);
    				  cout << a << "to the power " << b << " is " <<obj.power(obj); << endl;
				  break;
		}
    
 } 

    return 0;
}
