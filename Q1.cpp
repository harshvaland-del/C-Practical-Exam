#include <iostream>
using namespace std;

class Laptop {
private:
    string name;
    int  price;
    string processor;

public:
    Laptop(string n, int p, string proc) {
        name = n;
        price = p;
        processor = proc;
    }

    void display() {
        cout << "Laptop Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Processor: " << processor << endl;
    }
};

int main() {
    Laptop l1("CHUWI", 120000, "Intel i7");
    Laptop l2("Lenovo", 150000, "Intel i3");

    l1.display();
    cout << endl;
    l2.display();

    return 0;
}