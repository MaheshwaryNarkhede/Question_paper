#include <iostream>

const int MAX_SIZE = 100; 

int main() {
    using namespace std;

    int numbers[MAX_SIZE];
    int num;
    char comma;

    cout << "Enter the array of integers separated by commas: ";

    int count = 0;
    while (cin >> num >> comma && count < MAX_SIZE) {
        numbers[count++] = num;
    }

   
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += numbers[i];
    }

    cout << "Sum of the array: " << sum << endl;

    return 0;
}
