//Nathan Jermann, CSC 144 A, 9-9-18,
//Program that displays the sum, difference, product, and quotient of two integers.
#include <iostream> // enables program to perform input and output

//function main begins program execution
int main() {
    //declaring and initializing variables
    int number1{0};//first integer to add
    int number2{0}; //second integer to add
    int sum{0}; // sum of number1 and number2
    int difference{0}; // difference of number1 and number2
    int product{0}; // product of number1 and number2
    int quotient {0}; // quotient of number1 and number2

    std::cout << "Enter first integer: "; //prompt user for data
    std::cin >> number1; //read first integer from user into number1

    std::cout << "Enter second integer: "; //prompt user for data
    std::cin >> number2; //read first integer from user into number2

    sum = number1 + number2; //add the numbers; store result in sum
    std::cout << "Sum is " << sum << std::endl; //display sum; end line

    difference = number1 - number2; // subtracts the numbers; store in difference
    std::cout << "Difference is " << difference << std::endl; // display difference; end line

    product = number1 * number2; // multiplies the numbers; store in product
    std::cout << "Product is " << product << std::endl; // display product; end line

    quotient = number1 / number2; // divides the numbers; store in quotient
    std::cout << "Quotient is " << quotient << std::endl; //display quotient; end line

} //end function main
