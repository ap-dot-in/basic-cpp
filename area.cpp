#include <iostream>
#include <string>

double square(double a);
double rectangle(double l, double b);
double circle(double r);
double triangle(double b, double h);

int main(){
    double area;
    int shape;
    std::cout <<"==================AREA CALCULATION=====================\n\n";
    std::cout << "What shape do you want to calculate the area of?\n";
    std::cout << "0: Square, 1: Rectangle, 2: Circle, 3: Triangle. Enter the number next to your desired shape: \n";
    std::cin >> shape;

    switch(shape){
        case 0: 
            double side;
            std::cout << "Enter the side of the square: \n";
            std::cin >> side;
            area = square(side);
            break;
        case 1:
            double length, breadth;
            std::cout << "Enter the length & breadth of the rectangle: \n";
            std::cin >> length;  std::cin >> breadth;
            area = rectangle(length, breadth);
            break;
        case 2:
            double radius;
            std::cout << "Enter the radius of the circle: \n";
            std::cin >> radius;
            area = circle(radius);
            break;
        case 3:
            double base, height;
            std::cout << "Enter the base and height of the triangle: \n";
            std::cin >> base; std::cin >> height;
            area = triangle(base, height);
            break;
        default:
            std::cout << "Sorry! The shape you entered is not available.\n";
            area = -1.0;
            break;
    }

    std::cout << "Area: " << area << "\n";
    std::cout <<"========================================================\n";
}

double square(double a){
    return a * a;
}
double rectangle(double l, double b){
    return l * b;
}
double circle(double r){
    const double PI = 3.14;
    return PI * r * r;
}
double triangle(double b, double h){
    return 0.5 * b * h;
}
