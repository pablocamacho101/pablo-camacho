/*library functions lab 
cscI111
Program prompts user to enter a decimal number. It then finds various trig and mathematical values 
of the number using library functions and prints the results using cstdio's printf function.
Algorithm:
    1. Prompt user to enter a decmial number
    2. Store the number into a variable
    3. Find and print various results form the number
*/
#include <iostream>
#include <cstdio>
#include<math>
using namespace std;

int main()
{
    double number, result;
    cout <<" program calculates various results from a given number"<<endl;
    cout<<"Enter a decimal number:"
    cin>> number;
    result= ceil(number);
    printf("ceiling(%f)=%.1f\n",number,result);
    result=floor(number);
    printf("Floor(%f)=%.1f\n",number,result)
    cin.ignore(1000,'\n')
    cout<<"Enter to quit the the program: ";
    cin.get();
    cout<<"good bye..."<<endl;
    //finding and printing the square root of number 2 decimal places
    double snum=sqrt(number);
    cout<<snum<<endl;

//finding and print  cube root of number
double cnumb=std::cbrt(number);
cout<<cnumb>>;
// power 
cout pow(number, 10)
    return 0;


}