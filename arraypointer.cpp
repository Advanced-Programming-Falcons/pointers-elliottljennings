#include <iostream>

using namespace std;

int main(void) { 
    int size;

    cout << "how many numbers>" << endl;
    cin >> size;
    int* array = new int[size];

    for (int i = 0; i < size; i++){

        array[i] = i * 2;
    }
    cout << array << "memory location" << endl;
    cout << *array << "; value" << endl;

    cout << array << "memory location" << endl;
    cout << *array << "; value" << endl;

    for (int* ptr = array; ptr < array + size; ptr++){
        cout << "memory address : " << ptr << endl;
        cout << "valude : " << *ptr << endl;
    }
    for (int i = 0; i < size; i++){

        array[i] = (i * 2) + 5;
    }
    cout << array << "memory location" << endl;
    cout << *array << "; value" << endl;

    cout << array << "memory location" << endl;
    cout << *array << "; value" << endl;

    for (int* ptr = array; ptr < array + size; ptr++){
        cout << "memory address : " << ptr << endl;
        cout << "valude : " << *ptr << endl;
    }
    int temp = array[size - 1];
    cout << temp;

    for ( int i = size - 1; i > 0; i--){
        array[i] = array[i-1];

    }
    array[0] = temp;
    cout << "\n";
    cout << *array;
 for (int* ptr = array; ptr < array + size; ptr++){
        cout << "memory address : " << ptr << endl;
        cout << "valude : " << *ptr << endl;
    }
    delete[] array;


    return 0;


}