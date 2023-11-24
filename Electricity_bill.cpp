#include<iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    if(units < 0) {
        cout << "Invalid input." << endl;
        return 0;
    }

    int bill = 0;
    
    if(units <= 50) {
        bill = units * 1;
    }
    else if(units <= 150) {
        bill = 50 * 1 + (units - 50) * 2;
    }
    else {
        bill = 50 * 1 + 100 * 2 + (units - 150) * 5;
    }

    bill += 50;

    cout << "Electricity Bill: $" << bill << endl;

    return 0;
}
