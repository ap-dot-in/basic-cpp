#include <iostream>
#include <string>
/*
Based on the toppings entered by the user,
we try to calculate the bill at a pizza restaurant.
*/

void displayBill(std::string order[5], double prices[5], std::string toppings[5]);
int getIndex(std::string arr[5], std::string str);

int main(){
    double prices[5] = {8.99, 6.49, 3.49, 4.99, 7.99};
    std::string toppings[5] = {"Pepperoni", "Cheddar", "Onions", "Pineapple", "Burrata"};

    std::string customerOrder[5];

    /*We assume that the toppings[i] costs prices[i] €.
    The customer can order a maximum of 5 toppings.*/
    std::cout << "Welcome to our Pizza Restaurant! 🍕 What toppings would you like?\n";
    std::cout << "Options: ";
    for (int i = 0; i < 5; i++){
        std::cout << toppings[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Enter each choice and press ↵.\n";
    std::cout << "To complete your order, type 'END' and press ↵.\n";

    std::string takeOrder = "START"; int i = 0;
    while(takeOrder=="START"){
        std::cin >> customerOrder[i++];
        if(customerOrder[i-1]=="END"){
            takeOrder = "END";
        }
    };
    displayBill(customerOrder, prices, toppings);
}

int getIndex(std::string arr[5], std::string element){
    for (int i=0; i<5; i++){
        if(arr[i]==element){
            return i;
        }
    };
    return -1;
}
void displayBill(std::string order[5], double prices[5], std::string menu[5]){
    double totalBill = 0.0;
    std::cout <<"==============PIZZA RESTAURANT==============\n";

    for(int i=0; i<5; i++){
        int dishIndex = getIndex(order, order[i]);
        if (dishIndex!=-1){
            totalBill += prices[dishIndex];
        }
    }
    std::cout << "Your Total is: " << totalBill << "€.\n";
    std::cout <<"============THANK YOU! VISIT AGAIN===========\n";

}