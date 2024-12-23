#include <iostream>
using namespace std;

void name( char name[]) { // Use const to indicate the input won't be modified
    int count = 0;

    cout << "Your name is " << name << endl;

    // Manually count the length of the name
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    cout << "The length of your name is " << count << endl;
}

int main() {
    name("daniel");
    return 0;
}