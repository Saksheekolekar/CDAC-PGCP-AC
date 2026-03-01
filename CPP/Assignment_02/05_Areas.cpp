#include <iostream>
using namespace std;
//function for area of Circle
double areaCircle(double radius)
{
    return radius * 3.1415 * radius;
}
//function for area of Rectangle
double areaRectangle(double length, double breadth)
{
    return length * breadth;
}
//function for area of Square
double areaSquare(double side)
{
    return side;
}

int main()
{
    double radius, length, breadth, side;

    cout << "enter Radius of Circle:" << endl;
    cin >> radius;
    cout << "Area of Circle:" << areaCircle(radius) << endl;

    cout << "enter  length, breadth of Rectangle,:" << endl;
    cin >> length >> breadth;
    cout << "Area of Rectangle:" << areaRectangle(length, breadth) << endl;

    cout << "enter side oF Square:" << endl;
    cin>>side;
    cout << "Area of Square:" << areaSquare(side) << endl;
    cin >> side;

    return 0;
}