#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int num;
    int guess;
    int tries;
    std::cout << "===================Can you correctly guess the number?===================\n";

    num = rand() % 100 + 1; // random number between 1 & 100
    do{
        std::cout << "Enter your guess: \n";
        std::cin >> guess;
        tries+=1;

        if (guess>num){
            std::cout << "Your guess is too high!\n";
        }
        else if (guess<num){
            std::cout << "Your guess is too low!\n";
        }
        else{
            std::cout << "CORRECT!\n";
        }
    }while (guess!=num);

    return 0;
}