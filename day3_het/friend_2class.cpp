//This is C++ programme to demonstrate friend function charecteristic in which friend function is member function of another class
//edited by: Het Shah


#include <iostream>

using namespace std;
   // class ABC;
   class XYZ;  //declaring class XYZ
    
    class ABC		//class ABC starts here
        {
			
          int input;		//private member
          
          public:	
            
            void setInput(int a)	//function to set value of input
            {
                    input=a;
                   
            }
            int getdata()		//function to get value
                {
                    return input;
                }
	    int add(ABC,XYZ);  //function declaration
            
        };	//class ABC ends here
 
    class XYZ	//class XYZ starts here
        {
            int input1;	//private member

            public:
            
            int getdata()
                {				//function to get value
                    return input1;
                }
	    void setInput(int a)
	         {				//function to set value of input
	                input1=a;
	         }
	    friend int ABC :: add(ABC,XYZ);	//friend function declaration

	     
		
        };		//class XYZ ends here
int ABC :: add(ABC obj,XYZ obj1)
		{					//function defined outside class using scope resolutuion
		   return obj.input+obj1.input1;	//function to add inputs of 2 objects
		}


            

//main method starts here
int main()
{
    int a,b,c;
    ABC obj;	//creating object of class ABC 
    XYZ obj1;	//creating object of class XYZ
    cout << "Enter 2 values" << endl;
    cin >> a >> b;
    //cin >> b;
    obj.setInput(a);
    obj1.setInput(b);	//function calling
    c=obj.add(obj,obj1);
    cout << "Sum of "<< a << " and " << b << " is " << c << endl;
    
    return 0;
}
