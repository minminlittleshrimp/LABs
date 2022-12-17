#include <iostream> 
using namespace std;

void swap(int *ptr_a, int *ptr_b) {
    int temp;
    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

int main () {
    int a,b;
    cin >> a >> b;
    swap(&a,&b);
    cout << a << " "<< b << endl;
}