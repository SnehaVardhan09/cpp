#include <iostream>

/* Statements - most basic unit in C++

int main(){
    int firstNumber = 9;  //Statement
    int secondNumber= 99;  //Statement

    std::cout << "FirstNumber: " << firstNumber << std::endl; //Statement
    std::cout << "SecondNumber:" << secondNumber<< std::endl; //Statement

    int sum = firstNumber + secondNumber; //Statement
    std::cout << "Sum: " << sum << std::endl; //Statement
    return 0;
}

*/


//Functions - Reusability


int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){
    int firstNumber = 9;
    int secondNumber= 99;

    std::cout << "FirstNumber: " << firstNumber << std::endl;
    std::cout << "SecondNumber: "<< secondNumber<< std::endl;

    int sum = firstNumber + secondNumber;
    std::cout << "sum: " << sum << std::endl;

    sum = addNumbers(9,89);
    std::cout << "Sum: "  << sum << std::endl;
    
    std::cout << "Sum: "  << addNumbers(9,9) << std::endl;
    return 0;
}
