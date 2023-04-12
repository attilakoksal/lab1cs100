#include <iostream>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    string input;
    cout << "Please choose a rectangle or triangle: " << endl;
    cin >> input;
    if(input == "RECTANGLE" || input == "rectangle" || input == "Rectangle"){
        Rectangle newrect;
        int width;
        int height;
        cout << "Enter a width for the rectangle: " << endl;
        if(width < 0){
            cout << "Please enter a correct dimension for the width: " << endl;
            cin >> width;
        }
        else{
            cin >> width;
        }
        cout << "Enter a height for the rectangle: " << endl;
        if(height < 0){
            cout << "Please enter a correct dimension for the height: " << endl;
            cin >> height;
        }
        else{
            cin >> height;
        }
        newrect.set_width(width);
        newrect.set_height(height);
        cout << "The area for your rectangle is: " << newrect.area() << endl;
    }
    if(input == "TRIANGLE" || input == "triangle" || input == "Triangle"){
        Triangle newtri;
        int base;
        int height;
        cout << "Enter a base for the triangle: " << endl;
        if(base < 0){
            cout << "Please enter a correct dimension for the base: " << endl;
            cin >> base;
        }
        else{
            cin >> base;
        }
        cout << "Enter a height for the triangle: " << endl;
        if(height < 0){
            cout << "Please enter a correct dimension for the height: " << endl;
            cin >> height;
        }
        else{
            cin >> height;
        }
        newtri.set_base(base);
        newtri.set_height(height);
        cout << "The area for your triangle is: " << newtri.area() << endl;
    }

    return 0;

}