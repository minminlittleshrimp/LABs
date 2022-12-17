#include <iostream> 
using namespace std;

int add(int *ptr_a, int *ptr_b) {
    return *ptr_a + *ptr_b;
}

int main () {
    int a,b;
    cin >> a >> b;
    cout << add(&a,&b) << endl;
}

// void add(int &a, int &b) {
//     int &c =a;
//     c = a +b;
// }

// int main () {
//     int a,b;
//     cin >> a >> b;
//     add(a,b);
//     cout << a<< endl;
// }