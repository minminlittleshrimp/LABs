#include <iostream>
using namespace std;

class student {
    private:
        string name;
        int marks1;
        int marks2;
    
    public:                                           
        student(string name, int marks1, int marks2) {   
            this->name = name;
            this->marks1 = marks1;
            this->marks2 = marks2;
        }

        int calc_media() {
            return (this->marks1 + this->marks2)/2;
        }

        void disp() {
            cout << "Name: " << name << endl;
            cout << "Media score: " << this->calc_media() << endl;
        }
};

int main () {
    cout << "Enter name: " << endl;
    string name;
    cin >> name;
    cout << "Enter marks: " << endl;
    int marks1, marks2;
    cin >> marks1 >> marks2 ;
    student obj(name, marks1, marks2);
    obj.disp();
    return 0;
}
