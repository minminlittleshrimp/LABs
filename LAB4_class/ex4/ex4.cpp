#include <iostream>
using namespace std;

class calculator {
    private: 
        double real1, real2, img1, img2;
    public:
        calculator (double real1,
                    double real2,
                    double img1,
                    double img2) {
            this->real1 = real1;
            this->real2 = real2;
            this->img1 = img1;
            this->img2 = img2;
        } 

        double sum_real() {
            return this->real1 + this->real2;
        }

        double sum_img() {
            return this->img1 + this->img2;
        }

        void disp() {
            cout << "The sum of 2 complex numbers: "
                 << this->sum_real() << " + i" 
                 << this->sum_img() << endl;
        }
};

int main() {
    double real1, real2, img1, img2;
    cout << "Input first number real part: " << endl;
    cin >> real1;
    cout << "Input first number imaginary part: " << endl;
    cin >> img1;
    cout << "Input second number real part: " << endl;
    cin >> real2;
    cout << "Input second number imaginary part: " << endl;
    cin >> img2;
    calculator cal(real1, real2, img1, img2);
    cal.disp();
    return 0;
}