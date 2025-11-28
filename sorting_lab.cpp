#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int n = 10, arr[10];
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nChoose Sorting Algorithm:\n";
    cout << "[1] Bubble Sort\n[2] Insertion Sort\n[3] Selection Sort\n";
    int choice; cin >> choice;

    switch (choice) {
        case 1: bubbleSort(arr, n); break;
        case 2: insertionSort(arr, n); break;
        case 3: selectionSort(arr, n); break;
        default: cout << "Invalid choice!"; return 0;
    }

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

