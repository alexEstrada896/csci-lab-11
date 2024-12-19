/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{

	int num1,num2;





//asks user to imput 2 numbers
	cout <<"Enter two different numbers"<<endl;
	cin>>num1;
	cin>>num2;

//determins if the numbers are the same
	if (num1==num2) {
		cout <<"The two numbers you entered are the same. Please enter two different numbers"<<endl;
	}
//determins which number is bigger
	else
		num1>num2 ? cout<<num2<<" is the smaller number,"<<num1<<" is the bigger number"<<endl:  cout<<num1<<" is the smaller number,"<<num2<<" is the bigger number"<<endl;
//checks if user has entered two of the same numbers


	return 0;
}