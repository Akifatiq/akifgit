/*
@title :operators in cpp
@writtn by : waqar ali
*/
#include <iostream>
using namespace std;
int main()
{
    int x=30;
    int y=40;
    //Arithmetic Operator
    cout<<"Result pf arihtmetic Operators are" <<endl;
    cout <<"addition of x and y is"<< x + y << endl;
    cout <<"subtraction of xand y"<< x - y << endl;
    cout <<"multiplication of x and y"<< x*y << endl;
    cout <<"division of x and y"<< x/y << endl;
    cout <<"modulus of x over y"<< x%y << endl;
    cout <<"postfix increament"<< x++ << endl;
    cout <<"prefix increament"<< ++x << endl;
    cout <<"postfix decreament"<< y-- << endl;
    cout <<"prefix decreament"<< --y << endl;
    cout <<"End"<< endl;
     //ASSIGNMENT OPERATORS
     cout <<"result of Assigment and Compound Assignment Operators are"<<endl;
     int result = 10;
     cout<<"result is"<< result << endl;
     //COMPOUND ASSIGNMENT AOR ADDITIONAL OPERATORS
     result /= 4;
     result *= 4;
     result += 10;
     result -= 20;
     result %= 20;
    //COMPARISON OPERATORS  
    cout <<( x > y )<< endl;
    cout <<( x < y ) << endl;
    cout <<( x >= y )<< endl;
    cout <<( x <= y )<< endl;
    cout <<( x != y ) << endl;
    cout <<( x == y ) << endl;
    //LOGICAL OPERATORS
    bool Girl = true;
    bool Boy = true;
    cout <<"-----------------"<< endl;
    cout <<"THE RESULT OF LOGICAL OPERATORS ARE"<< endl;
    cout << (Girl && Boy)<< endl;
    cout << (Girl || Boy) << endl;
    cout << (Girl)<< endl;
    return 0;









































}

