//This is C++ programme to demonstrate unary operator overload using friend function
//Edited by: Het Shah

#include<iostream>
using namespace std;

class XYZ
    {					//class XYZ starts here
        int x;
        public:	
            XYZ()				//default constructor
                {
                    x=0;
                }
            XYZ(int a)
                {			//parameterized constructor
                    x=a;
                }
           		
            void display()	//display() function
            {
                cout << "value of x is " << x<<endl;
            }
            
            friend XYZ operator ++(XYZ*);		//friend function declaration for pre increment
            friend XYZ operator ++(XYZ*,int);		//friend function declaration for post increment
            friend XYZ operator --(XYZ*);		//friend function declaration for pre decrement
            friend XYZ operator --(XYZ*,int);		//friend function declaration for post decrement
    };		//class XYZ ends here
 XYZ operator ++(XYZ &x1)
                {				//declaration for pre increment
                    XYZ temp;
                    temp.x=++x1.x;
                    return temp;		//return object
                }
 XYZ operator --(XYZ &x1)			//declaration for pre decrement
                {
                    XYZ temp;
                    temp.x=--x1.x;
                    return temp;		//return object
                }
 XYZ operator ++(XYZ &x1,int)			//declaration for post increment
                {
                    XYZ temp;
                    temp.x=x1.x++;
                    return temp;		//return object
                }
 XYZ operator --(XYZ &x1,int)			//declaration for post decrement
                {
                    XYZ temp;
                    temp.x=x1.x--;
                    return temp;		//return object
                }
int main()
    {
        
        
        XYZ x1(5),y;		//created 2 objects of class XYZ
        
        
        y=x1++;		//post increment
        y.display();
        
        y=++x1;		//pre increment
        y.display();
    
        y=--x1;		//pre decrement
        y.display();
        
        y=x1--;		//post decrement
        y.display();
        return 0;
        
    }

