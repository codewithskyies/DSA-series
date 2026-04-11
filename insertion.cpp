












#include <iostream>
using namespace std;

int main() {

    int array[10];
    int n, x;

    cout << "Enter size of array: ";
    cin >> n;

    if (n >= 10) {
        cout << "Array is full. Cannot insert element." << endl;
        return 0;
    }

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter the element at the beginning: ";
    cin >> x;

    // Shift elements right
    for (int i = n; i > 0; i--) {
        array[i] = array[i - 1];
    }

    array[0] = x;
    n++;

    cout << "Array elements are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}

