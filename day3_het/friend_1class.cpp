//This is C++ programme to understand friend function
//edited by: Het Shah 



#include <iostream>

using namespace std;
    class ABC			//class ABC starts here
        {
          int input1,input2;	//private variables
          
          public:
            void setInput(int,int);	//public function declaration
               
            friend int add(ABC);      // friend function declaration


        };			//class ABC ends here
void ABC :: setInput(int a,int b)	//method definition outside class
                {
                    input1=a;		//sets input for private members
                    input2=b;			
                }
int add(ABC obj)               //add(ABC) function that to be made friend of class ABC
    {
        return obj.input1+obj.input2;
    }


int main()
{
    int a,b,c;
    ABC obj;
    cout << "Enter 2 values" << endl;
    cin >> a >> b;
    //cin >> b;
    obj.setInput(a,b);
    c=add(obj);
    cout << "Sum of "<< a << " and " << b << " is " << c << endl;
    
    return 0;
}
