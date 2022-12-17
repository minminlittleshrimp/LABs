#include <iostream>
using namespace std;

// Using function in summing array elements
int sum(int *ptr, int &n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    return sum;
}

void print_reverse(int *ptr, int &n) {
    for (int i = 0; i < n; i++) {
        cout << " " << *ptr;
        ptr--;
    }
    cout << endl;
}

int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    /*---------------------------------------------------------------*/
    /* Sum array elements */
    // cout << "Total the elements in array: " << sum(arr, n) << endl;

    /*---------------------------------------------------------------*/
    /* Print reverse of the array */
    cout << "Reverse of the array:";

    /* With pointer */
    print_reverse(&arr[n-1], n);

    /* Without pointer */ 
    // for (int i = 0; i<n; i++) {
    //     cout << " " << arr[n-1-i];
    // }
    // cout << endl;
    /*---------------------------------------------------------------*/
    return 0;
}

// Using pointer to sum an array
// int main () {
//     int n;
//     int sum = 0;
//     cin >> n;
//     int arr[n];
//     int *ptr = arr; // Auto take the first memory address the array
//     for (int i = 0; i<n; i++) {
//         ptr++;   // Pointer advance 1 unit 
//         cin >> *ptr;
//         sum += *ptr;
//     }
//     cout << "Total the elements in array: " << sum << endl;
//     return 0;
// }

// Without pointer!
// int main () {
//     int n;
//     int sum = 0;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     cout << "Total the elements in array: " << sum << endl;
//     return 0;
// }