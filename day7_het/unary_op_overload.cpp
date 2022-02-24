//This C++ code demonstrates unary operator overloading with object and without object
//Edited by: Het Shah



#include<iostream>
using namespace std;
class ABC		//class ABc created
    {
        int x;	//private member
        public:
        ABC()		//default constrctor
            {
                x=0;        
            }
        ABC(int a)	// parameterized constrctor
            {
                x=a;
            }
        void operator -()
            {                       //overloading '-' operator                   
                x=-x;
            }
        void operator --()
            {                       //overloading '--' operator(pre decrement)
                --x;
            }
        void operator ++()
            {                       //overloading '++' operator(pre increment) 
                ++x;
            } 
        void operator --(int)
            {                       //overloading '--' operator(post decrement) 
                    x--;
            }
        void operator ++(int)
            {                       //overloading '++' operator(post increment) 
                    x++;
            }
        void display()      //display() function
            {
                cout << "value of x is " << x<<endl;
            }
    };
class XYZ       //class XYZ created
    {           
        int x;      //private member
        public:     
            XYZ()
                {           //default constructor
                    x=0;
                }
            XYZ(int a)
                {       //parameterized constructor
                    x=a;
                }
            XYZ operator ++()
                {                   //overloading '++' operator(pre increment)
                    XYZ temp;
                    temp.x=++x;
                    return temp;     //returning object
                }
            XYZ operator --()
                {                   //overloading '--' operator(pre decrement)
                    XYZ temp;
                    temp.x=--x;
                    return temp;     //returning object
                }
            XYZ operator ++(int)
                {                   //overloading '++' operator(post increment)
                    XYZ temp;
                    temp.x=x++;
                    return temp;     //returning object
                }
            XYZ operator --(int)
                {                   //overloading '--' operator(post decrement)
                    XYZ temp;
                    temp.x=x--;
                    return temp;     //returning object
                }
            void display()      //display() function
            {
                cout << "value of x is " << x<<endl;
            }
    };
int main()
    {           //main method starts here
        ABC a1(5),a2(10); //created 2 objects of class ABC
       -a1; 
        a1.display();

        a2--; //post decrement
        a2.display();

        --a2;  //pre decrement
        a2.display();

        ++a2;  //pre increment
        a2.display();

        a2++;   //post increment
        a2.display();
        
        XYZ x1(5),y;    //created 2 objects of class XYZ
        
        y=x1++; //post increment
        y.display();
        
        y=++x1;     //pre increment
        y.display();
    
        y=--x1;     //pre decrement
        y.display();
        
        y=x1--;     //post decrement
        y.display();
        return 0;
                        //main method ends here
    }

