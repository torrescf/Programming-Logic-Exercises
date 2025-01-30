#include <iostream>
using namespace std;

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shell_sort_desc(int arr[], int n) {
    int gap = n / 2;

    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;
            cout << "gap: " << gap << ", i: " << i << ", pos_gap: " << j << endl;
            while (j >= gap && arr[j - gap] < temp) {
                arr[j] = arr[j - gap];
                j -= gap;
                cout << "    pos_gap: " << j << " (depois de decrementar)" << endl;
            }
            arr[j] = temp;
            print_array(arr, n); // Print array after each insertion
        }
        gap /= 2;
    }
}

int main() {
    float arr[] = {1.8, 2.3, 7.2, 12.3, 18.1, 3.3, 8.9, 11.1, 68.3, 56, 15.3, 89.2, 28.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    shell_sort_desc(reinterpret_cast<int*>(arr), n);
    cout << "Array ordenado em ordem decrescente: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
