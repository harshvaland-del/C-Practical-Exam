#include <iostream>
#include <string>
using namespace std;

class Shape {
protected: 
    string color;
    double area;
public:
    virtual void displayDetails() { 
        cout << "General Shape details" << endl;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r, string c) { radius = r; color = c; area = 3.14 * r * r; }
    void displayDetails() override {
        cout << "Shape: Circle | Color: " << color << " | Area: " << area << endl;
    }
};

class Rectangle : public Shape {
    double l, w;
public:
    Rectangle(double length, double width, string c) { l = length; w = width; color = c; area = l * w; }
    void displayDetails() override {
        cout << "Shape: Rectangle | Color: " << color << " | Area: " << area << endl;
    }
};

int main() {
   
    Shape* shapes[2];
    shapes[0] = new Circle(5, "Yellow");
    shapes[1] = new Rectangle(10, 5, "Green");

    for(int i = 0; i < 2; i++) {
        shapes[i]->displayDetails(); 
    }
}