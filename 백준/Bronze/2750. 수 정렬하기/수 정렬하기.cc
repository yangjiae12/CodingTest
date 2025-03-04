#include <iostream>
using namespace std;

void insertionSort(int arr[], int n);

int main() {
    int t;
    cin >> t;
    
    int arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    
    insertionSort(arr, t);
    
    for (int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }
}

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