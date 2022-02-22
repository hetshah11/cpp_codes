//This C++ programme demonstrates usage of objects as arguments and return types
//Edited By; het Shah 


#include <iostream>

using namespace std;
class calculator		//calculator class created
    {
    public:
      int input;
      
      public:
            void setInput(int a)	//function for setting value
                {
                    input=a;
                    
                }
            calculator add(calculator obj1,calculator obj2)	//function for addition, here it takes objects as arguments
                {
                    calculator obj3;
                    obj3.input= obj1.input+obj2.input;
                    return obj3;			//returns object
                }
            calculator substract(calculator,calculator);	//function declaration that returns object
    };		//calculator class ends
 calculator calculator :: substract(calculator obj1,calculator obj2)	//member function that returns object defined outside class using scope resolutuon
            {
                    calculator obj4;
                    obj4.input= obj1.input-obj2.input;
                    return obj4;		//returns object
            }
int main()		//main method starts
{
    int a,b;
    calculator c1,c2,c3,c4;		//4 objects created of calculator class
    cout << "Enter 2 values" << endl;
    cin >> a;
    cin >> b;
    c1.setInput(a);
    c2.setInput(b);
    obj3 = obj1.add(c1,c2);
    cout << "Sum of " << a << " and " << b << " is " <<c3.input << endl;
    c4 = c1.substract(c1,c2);

    cout << "differnce of " << a << " and " << b << " is " <<c4.input;
   

    return 0;
}
