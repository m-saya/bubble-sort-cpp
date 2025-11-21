#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int arr[100];   // Array of 100 integers
    int temp;

    // Seed the random generator with the current time
    srand(time(0));

    // Fill the array with random numbers from 0 to 999
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 1000;
    }

    // Bubble sort (simple O(n^2) sorting algorithm)
    for (int i = 0; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {
            if (arr[j] < arr[i]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Print sorted array (10 numbers per line)
    for (int i = 0; i < 100; i++) {
        cout << arr[i] << "\t";
        if ((i + 1) % 10 == 0) cout << "\n";
    }

    return 0;
}
