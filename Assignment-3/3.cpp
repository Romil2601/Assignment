/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task*/

#include <iostream>
using namespace std;
int main()
{
    // Procedural Programming (POP) approach
    float length, width;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    float area = length * width;
    cout << "Area of rectangle (POP): " << area << endl;

    // Object-Oriented Programming (OOP) approach
    class Rectangle {
    public:
        float length;
        float width;
        float getArea() 
        {
            return length * width;
        }
    };

    Rectangle r;
    cout << "Enter length and width of rectangle: ";
    cin >> r.length >> r.width;
    cout << "Area of rectangle (OOP): " << r.getArea() << endl;

    return 0;
}