#include <iostream>
using namespace std;

void Union(int arr[], int n, int brr[], int m) {
    cout << "\nUnion: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (brr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            cout << brr[i] << " ";
    }
}

void Intersection(int arr[], int n, int brr[], int m) {
    cout << "\nIntersection: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i] == brr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}

void SetDifference(int arr[], int n, int brr[], int m) {
    cout << "\nSet Difference (A-B): ";

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < m; j++) {
            if (arr[i] == brr[j]) {
                found = true;
                break;
            }
        }

        if (!found)
            cout << arr[i] << " ";
    }
}

void Membership(int arr[], int n, int key) {
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found)
        cout << key << " is present in Set A";
    else
        cout << key << " is not present in Set A";
}

int main() {
    int n;
    cout << "Enter number of elements in Set A: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of Set A: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m;
    cout << "\nEnter number of elements in Set B: ";
    cin >> m;

    int brr[m];
    cout << "Enter elements of Set B: ";
    for (int i = 0; i < m; i++)
        cin >> brr[i];

    Union(arr, n, brr, m);
    Intersection(arr, n, brr, m);
    SetDifference(arr, n, brr, m);

    int key;
    cout << "\n\nEnter element to check membership: ";
    cin >> key;

    Membership(arr, n, key);

    return 0;
}