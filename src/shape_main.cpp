#include <iostream>
#include <limits>
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
        while(!(cin >> width) || width < 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a correct dimension for the width: " << endl;
        }
        cout << "Enter a height for the rectangle: " << endl;
        while(!(cin >> height) || height < 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a correct dimension for the height: " << endl;
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
        while(!(cin >> base) || base < 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a correct dimension for the base: " << endl;
        }
        cout << "Enter a height for the triangle: " << endl;
        while(!(cin >> height) || height < 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a correct dimension for the height: " << endl;
        }
        newtri.set_base(base);
        newtri.set_height(height);
        cout << "The area for your triangle is: " << newtri.area() << endl;
    }

    return 0;

}