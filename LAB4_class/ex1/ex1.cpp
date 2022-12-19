#include <iostream>
using namespace std;

class triangle
{
    private:
        // Attribute (variable)
        double height;
        double width;
    public:
        // Constructor
        triangle(double h, double w) {
            this->height = h;
            this->width = w;
        }
        triangle(double h) {
            this->height = h;
            this->width = 2;
        }
        // Method (Function)
        double area() {
            return 0.5*(this->height)*(this->width);
        }
};

int main () {
    double x,y;
    cout << "Input height and width of your triangle: " << endl;
    cin >> x >> y;
    triangle a(x);
    cout << a.area() << endl;
    return 0;
}