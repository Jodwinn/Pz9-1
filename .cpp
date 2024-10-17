#include <iostream>
#include <windows.h>;
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int SIZE = 2; 
    int array[SIZE][SIZE] = {
        {1, 2}, 
        {3, 4}   
    };

    cout << "Суми рядків:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        int rowSum = 0;
        for (int j = 0; j < SIZE; ++j) {
            rowSum += array[i][j];
        }
        cout << "Рядок " << i + 1 << ": " << rowSum << endl;
    }

    cout << "Суми стовпців:" << endl;
    for (int j = 0; j < SIZE; ++j) {
        int colSum = 0;
        for (int i = 0; i < SIZE; ++i) {
            colSum += array[i][j];
        }
        cout << "Стовпець " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
