#include <iostream>
#include <algorithm> 
#include<Windows.h>

using namespace std;

int main() {
    SetConsoleCP (1251);
    SetConsoleOutputCP(1251);

    int arr[] = { 5, 2, 8, 4, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    
    sort(arr, arr + n);

   
    cout << "Масив після сортування: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
