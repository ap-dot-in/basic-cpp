#include <iostream>

int main(){

    int a;
    int b;
    char op;

    std::cout << "Enter number 'a' :";
    std::cin >> a;
    
    std::cout << "Enter number 'b' :";
    std::cin >> b; 

    std::cout << "Would you like to +, -, * or /? ";
    std::cin >> op;

    switch(op)
    {
        case '+':
            std::cout << "The sum of 'a' & 'b' is: " << a + b;
            break;
        case '-':
            std::cout << "The difference of 'a' & 'b' is: " << a - b;
            break;
        case '*':
            std::cout << "The product of 'a' & 'b' is: " << a * b;
            break;
        case '/':
            std::cout << "The quotient of 'a' divided by 'b' is: " << a / b;
            break;
        default:
            std::cout << "Invalid input! Enter one of +, -, * or / only.";   
    }
}