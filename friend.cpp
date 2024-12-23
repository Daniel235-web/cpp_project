#include <iostream>
using namespace std;

class MyClass {
private:
    int privateValue;

public:
    MyClass(int value) : privateValue(value) {}

    // Declare the friend function
    friend void displayPrivateValue(const MyClass& obj);
};

// Friend function definition
void displayPrivateValue(const MyClass& obj) {
    cout << "Private value: " << obj.privateValue << endl;
}

int main() {
    MyClass ob(42);

    // Accessing private member via friend function
    displayPrivateValue(ob);

    return 0;
}
