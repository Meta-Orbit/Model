#include <iostream>
#include <string>

#include "add.h"
#include "multiply.h"
#include "divide1.h"
#include "subtract.h"


int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;


    int sum = add(3, 4);
    std::cout << "3 + 4 = " << sum << std::endl;

    int product = multiply(3, 4);
    std::cout << "3 * 4 = " << product << std::endl;

    int result = divide(4, 8);
    std::cout << "8 / 4 = " << result << std::endl;

    int diff=subtract(8,3);
    std::cout<<"difference is : "<<diff;
    return 0;
}