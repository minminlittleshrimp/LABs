#include <iostream>
using namespace std;

class calculator {
    private: 
        int a;
        int b;
    public:
        calculator(int x, int y) {
            this->a = x; //assign a to x
            this->b = y; //assign b to y
        }

        int sum() {
            return this->a + this->b;
        }
};

int main () {
    int num1, num2;
    cout << "Input 2 numbers: "<< endl;
    cin >> num1 >> num2;
    calculator obj(num1, num2);
    cout << obj.sum() << endl;
    return 0;
}