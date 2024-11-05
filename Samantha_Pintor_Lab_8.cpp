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

cout << "Please enter a float number." << endl; //prompting user to input a float number
cin >> number; //user inputs 

//math
cout << "The square root of that number is..." << sqrt (number); //finding the square root of the number
cout << "That number raised to the fourth power is..." << pow (number,4); //raising the number to the fourth power
cout << "The floor of that number is..." << floor(number); //the floor of the number

/*Output
Please enter a float number.
12.8
The square root of that number is...3.57771
That number raised to the fourth power is...26843.5
The floor of that number is...12 */

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

 //PART 3   
//Function to calculate the sum of three numbers
double getSum(double number1, double number2, double number3) {
    return number1 + number2 + number3;
}

int main() {
    
// Declaring variables
double number1, number2, number3; //variable for the numbers
double result; //variable for the results

cout << "Please input three float numbers:" << endl; //prompting user to input 3 numbers
cin >> number1 >> number2 >> number3; // User inputs 3 numbers

// Using the getSum function to calculate the result
result = getSum(number1, number2, number3);

// Output the result
cout << "The sum of those numbers is: " << result << endl;

/* Output
Please input  three float numbers: 
12.8
13.4
13.4
The sum of those numbers is: 40.5 */
    
    return 0;
}
