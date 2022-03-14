//This C++ programme demonstarates how to restrict functions to throw only certain type of Exception(in terms of datatypes)

//Edited By; Het Shah



#include<iostream>
using namespace std;

	
		void Demo() throw(int,double)		//restricting demo() to throw only int and double
		{
			int a;
			cout <<"Enter a" << endl;
			cin >> a;
			if(a==1)
			   throw a;		//throwing ini
			else if(a==2)
		   	   throw 'A';		//throwing char
			else if(a==3)
			   throw 4.5;		//throwing double
				
		}		
	
int main()
	{
		try			//try block
		{
			Demo();
		}	
		catch(int n)		//catch for int
			{
				cout << "Exception caught by integer" << endl;
			}
		catch(char ch)		////catch for char (ERROR----Because we have restricted throwing only int and double)
			{
				cout << "Exception caught by charecter" << endl;
			}
		catch(...)		//default catch
			{
				cout <<"Other exceptions caught" << endl;
			}
		cout <<"End of programme" << endl;
	}


/*terminate called after throwing an instance of 'char'
Aborted (core dumped) -------------------------Error because we have restricted demo function to throw only int and double*/


	
