#include <iostream>

using namespace std;
   
   class XYZ;         //class XYZ declaration
    
    class ABC        //class ABC defination
        {
	
          int input;    //private variable
          
          public:		//public methods
            
            void setInput(int a)
            {
                    input=a;	//sets input
                   
            }
            int getdata()
                {
                    return input;	//gets input
                }
	    int add(ABC,XYZ);	//add(ABC,XYZ) method declaration, defination outside class
            
        };  	//class ABC ends here
 
    class XYZ	//class XYZ starts here
        {
            int input1;	//private variable

            public:		//public methods
            
            int getdata()
                {
                    return input1;	
                }
	    void setInput(int a)
	         {
	                input1=a;
	         }
	    friend int ABC :: add(ABC,XYZ);		//friend function declared in class ABC

	     
		
        };		//class XYZ ends here
int ABC :: add(ABC obj,XYZ obj1)
		{					//add(ABC,XYZ) function that is friend function to class XYZ
		   return obj.input+obj1.input1;
		}


            


int main()		//main method starts
{
    int a,b,c;
    ABC obj;				//object created of class ABC
    XYZ obj1;				//object created of class ABC
    cout << "Enter 2 values" << endl;
    cin >> a >> b;
    //cin >> b;
    obj.setInput(a);
    obj1.setInput(b);
    c=obj.add(obj,obj1);	//add(obj,obj1) can access private member of class XYX as it is declared as friend function   
    cout << "Sum of "<< a << " and " << b << " is " << c << endl;
    
    return 0;
}		//main method ends
