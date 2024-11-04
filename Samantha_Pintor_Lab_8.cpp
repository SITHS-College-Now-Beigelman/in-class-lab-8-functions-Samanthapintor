//Samantha Pintor 
//Lab 8 
//11-04-24

#include <iostream> 
#include <cmath> //use for mathematical functions

using namespace std;

int main ()
{

//PART 1
//declaring variables 
double number; //variable for number

cout << "Please enter a number of your choice with two decimal places." << endl; //prompting user to input 
cin >> number; //user inputs 

//math
cout << "The square root of that number is..." << sqrt (number); //finding the square root of the number
cout << "That number raised to the fourth power is..." << pow (number,4); //raising the number to the fourth power
cout << "The floor of that number is..." << floor(number); //the floor of the number


//PART 2
int doubleMultiply (int a, int b)
{
    int product; 
    product = a * b * 2; 
    return product; 
} 
int main ()
{ 
    int num1, num2; 
    cout << "Enter two integers: "; 
    cin >> num1 >> num2; 
    cout << "Twice the product of the numbers is: "
        << doubleMultiply(num1, num2) << endl; 
}

/* output
Enter two integers: 1
2
Twice the product of the numbers is: 4
*/
    return 0;
}
