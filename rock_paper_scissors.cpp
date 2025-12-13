#include <iostream>
#include <string>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void displayChoice(char choice, std::string player);
void getWinner(char userChoice, char computerChoice);

int main(){
    std::cout << "************* Rock-Paper-Scissors *************\n";
    char userChoice, computerChoice;
    getWinner(userChoice, computerChoice);
    std::cout << "***********************************************\n"  ;
    return 0;
}

char getUserChoice(){
    char choice;
    do{
        std::cout << "Enter `r` for Rock 🪨\n";
        std::cout << "Enter `p` for Paper 📃\n";
        std::cout << "Enter `s` for Scissors ✂️\n";
        std::cin >> choice;
    }while(choice!='r' && choice!='p' && choice!='s'); // handles invalid character inputs
    displayChoice(choice, "USER");
    return choice;
}
char getComputerChoice(){

    srand(time(NULL));
    char choice; int randNum;
    randNum = rand() % 3 + 1; // random integer between 1 & 3

    switch(randNum){
        case 1: 
            choice = 'r';
            break;
        case 2:
            choice = 'p';
            break;
        case 3:
            choice = 's';
            break;
    }
    displayChoice(choice, "COMPUTER");
    return choice;
}
void displayChoice(char choice, std::string player){
    std::string firstWord = (player=="USER") ? "Your" : "Computer's";
    if (choice=='r'){
        std::cout << firstWord <<" choice is 🪨\n";
    }else if(choice == 'p'){
        std::cout << firstWord <<" choice is 📃\n";
    }
    else{
        std::cout << firstWord <<" choice is ✂️\n";
    }
}

void getWinner(char userChoice, char computerChoice){
    std::cout << "Let's play a game! 🎮\n";
    userChoice = getUserChoice();
    computerChoice = getComputerChoice();
    std::string continueGame = "YES";

    while (continueGame=="YES"){
        if(userChoice == computerChoice){ 
            std::cout << "It is a TIE. Try Again!\n"; 
            userChoice = getUserChoice();
            computerChoice = getComputerChoice();
        }else{
            continueGame = "NO";

            if(userChoice=='r'){
                if(computerChoice=='p'){
                    std::cout << "You WON! Rock 🪨 defeats Paper 📃.\n";
                }else{
                    std::cout << "You WON! Rock 🪨 defeats Scissors ✂️.\n";           
            }
            }else if (userChoice=='p'){
                if (computerChoice=='r'){
                    std::cout << "You LOST! Rock 🪨 defeats Paper 📃.\n";
                }else{
                    std::cout << "You LOST! Scissors ✂️ defeats Paper 📃.\n";          
                }
            }else{
                if (computerChoice=='p'){
                    std::cout << "You WON! Scissors ✂️ defeats Paper 📃.\n";
                }else{
                    std::cout << "You LOST! Rock 🪨 defeats Scissors ✂️.\n";
                }
            }
        }
    };
}

