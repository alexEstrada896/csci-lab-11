/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    char day;
 //asks user to enter number for day of the week
 cout<< "enter a number for the day of the week"<<endl;
 cin>>day;
 //displays the name of the coresponding day 
switch(day){
 
 case '1': 
 cout <<"Day 1 is Monday"<<endl;
 break;
 
 case '2':
 cout << "Day 2 is Tuesday"<<endl;
 break;
 
 case '3':
 cout <<"Day 3 is Wednsday "<<endl;
 break;
 
 case'4':
 cout <<"Case 4 is Thursday"<<endl;
 break;
 
 case'5':
 cout<<"Case 5 is Friday"<<endl;
 break;
 
 case'6':
 cout<<"Case 6 is Saturday"<<endl;
 break;
 
 case '7':
 cout<<"Case 7 is Sunday"<<endl;
 break;
 
 default:
 cout<<"enter a number 1-7 to correspond with the days of the week"<<endl;
    
    
    
    
    
    
    
    
}
    return 0;
}