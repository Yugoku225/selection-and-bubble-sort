#include <iostream>
using namespace std;

int main() {
    int array[5];
    
    cout << "Enter your array: ";
    for(int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is: ";
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
