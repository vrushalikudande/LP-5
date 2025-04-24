#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to calculate the minimum value
void findMin(int *arr, int n) {
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    cout << "\nMinimum value = " << min_val << endl;
}

// Function to calculate the maximum value
void findMax(int *arr, int n) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    cout << "\nMaximum value = " << max_val << endl;
}

// Function to calculate the sum and average of the array
void calculateSumAndAvg(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float avg = static_cast<float>(sum) / n;
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

int main() {
    int n;

    // Take the array size as input from the user
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Fill the array with random numbers
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;  // Random number between 0 and 99
    }

    // Display the array
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Perform operations
    findMin(arr, n);
    findMax(arr, n);
    calculateSumAndAvg(arr, n);

    // Clean up the dynamically allocated memory
    delete[] arr;

    return 0;
}
