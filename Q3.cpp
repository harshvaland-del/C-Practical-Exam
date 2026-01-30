#include <iostream>
#include <string>
using namespace std;

class Shape {
private:
    string color;
    double area;

public:
    
    void setColor(string c) { color = c; }
    void setArea(double a) { area = a; }

    
    string getColor() { return color; }
    double getArea() { return area; }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r, string c) {
        radius = r;
        setColor(c);
    }
    void calculateArea() {
        setArea(3.14159 * radius * radius);
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w, string c) {
        length = l;
        width = w;
        setColor(c);
    }
    void calculateArea() {
        setArea(length * width);
    }
};

int main() {
    Circle c(5, "Red");
    c.calculateArea();
    cout << "Circle Color: " << c.getColor() << ", Area: " << c.getArea() << endl;

    Rectangle r(4, 6, "Blue");
    r.calculateArea();
    cout << "Rectangle Color: " << r.getColor() << ", Area: " << r.getArea() << endl;
}