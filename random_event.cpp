#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int randNum = rand() % 3 + 1;

    switch(randNum){
        case 1: std::cout << "You chose Door 1: You are now in Zombie Land!!!";
                break;
        case 2: std::cout << "You chose Door 2: You are safely back on Earth <3";
                break;
        case 3: std::cout << "You chose Door 3: You are at the High Seas, get ready to swim...";
                break;
    }
}