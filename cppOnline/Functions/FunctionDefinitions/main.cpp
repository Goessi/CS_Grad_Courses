#include <iostream>
using namespace std;

double calc_area_circle(double radius) {
    const double pi {3.1415926};
    double area {pi*radius*radius};
    return area;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;    
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius and height of the cylinder: ";
    cin >> radius >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << height * calc_area_circle(radius) << endl;
}

int main()
{
    area_circle();
    volume_cylinder();
}