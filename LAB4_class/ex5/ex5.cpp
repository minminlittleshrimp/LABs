#include <iostream>
#include <iomanip>
using namespace std;

#define Pi 3.14

class rectangle {
    private: 
        int width;
        int height;
    public:
        rectangle(int width, int height) {
            this->width = width;
            this->height = height;
        }    

        int area() {
            return this->width * this->height;
        }

        int perimeter() {
            return 2*(this->width + this->height);
        }

        void disp() {
            cout << "Area: " << fixed << setprecision(2) << area() << endl;
            cout << "Perimeter: " << fixed << setprecision(2) << perimeter() << endl;
        }
};

class circle{
    private: 
        double rad;
    public:
        circle(double rad) {
            this->rad = rad;
        }    

        double area() {
            return (this->rad) * (this->rad) * Pi;
        }

        double perimeter() {
            return 2*(this->rad)*Pi;
        }

        void disp() {
            cout << "Area: " << fixed << setprecision(2) << area() << endl;
            cout << "Perimeter: " << fixed << setprecision(2) << perimeter() << endl;
        }
};

class square {
    private: 
        int side;
    public:
        square(int side) {
            this->side = side;
        }    

        int area() {
            return (this->side) * (this->side);
        }

        int perimeter() {
            return 4*(this->side);
        }

        void disp() {
            cout << "Area: " << fixed << setprecision(2) << area() << endl;
            cout << "Perimeter: " << fixed << setprecision(2) << perimeter() << endl;
        }
};


int main() { 
    int h, w;
    cout << "Input height and width of the rectangle: ";
    cin >> h >> w;
    rectangle rect(h,w);
    rect.disp();  //display void disp()

    int s;
    cout << "Input side of the square: ";
    cin >> s;
    square sqr(s);
    sqr.disp();

    double r;
    cout << "Input radius of the circle: ";
    cin >> r;
    circle cir(r);
    cir.disp();

    return 0;
}
