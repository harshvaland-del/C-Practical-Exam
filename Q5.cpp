#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0; 
    virtual void drive() = 0;      
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car: Starting engine with a button..." << endl;
    }
    void drive() override {
        cout << "Car: Driving with a steering wheel." << endl;
    }
};

class Bike : public Vehicle {
public:
    void startEngine() override {
        cout << "Bike: Starting engine with a kick or self-start..." << endl;
    }
    void drive() override {
        cout << "Bike: Driving with handle bars." << endl;
    }
};

int main() {
    Vehicle* garage[2]; 
    garage[0] = new Car();
    garage[1] = new Bike();

    for(int i = 0; i < 2; i++) {
        garage[i]->startEngine();
        garage[i]->drive();
        cout << "-------------------" << endl;
    }
}