#include <iostream>

void barCounter(int num);

int main(){
    int n;
    std::cout << "Hello! How many pints of beer would you like?\n";
    std::cin >> n;

    barCounter(n);
    return 0;
}

void barCounter(int num){
    
    if (num>0){
        std::cout << "Great! Here you go: ";
        for(int i=1; i<=num; i++){
            std::cout << "🍺 ";
        };
        std::cout << "\n";
    }
    else if (num==0){
        std::cout << "No problem! Help yourself to all our other offerings. <3\n";
    }
    else{
        std::cout << "Sorry, we don't understand your order. :(\n";
    };
}