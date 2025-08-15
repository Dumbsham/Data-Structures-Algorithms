#include <bits/stdc++.h>
using namespace std;

vector<int> zeroes_brute(int arr[], int n) {
    vector<int> temp(n, 0); // fix: correct vector initialization
    int count = 0;
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index++] = arr[i];
        } else {
            count++;
        }
    }

    for (int i = index; i < n; i++) {
        temp[i] = 0;
    }

    return temp;
}

int main() {
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array before moving the zeroes to the end was:\n[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
    vector<int> result = zeroes_brute(arr, n); // fix: store returned vector

    cout << "The array after moving the zeroes to the end became:\n[";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << "]\n";

    return 0;
}
