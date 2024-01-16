/*
 Code -> Compiler ->  Executable binary file

    1. Compile Time Errors 
        eg: `;` missing 
        Binary file is not created
    2. Runtime Errors
        Compile time will succeed (logical error). Can cause crash 
    3. Warnings
        Compile time will succeed. 
*/

#include <iostream>

int main(){
    //Compile time error
    std::cout << "hello world" << std::endl;

    //Run timeerror
    int value = 9/0;
    std::cout << "value: " << value << std::endl;

    
    return 0;
}