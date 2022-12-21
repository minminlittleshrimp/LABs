#include <iostream>
#include <iomanip>
using namespace std;

class student {
    private:
        string name;
        int age;
        string address;
        double mat_score;
        double lit_score;
        double eng_score;
    public:
        student(string name,int age,string address,double mat_score,double lit_score,double eng_score) {
            this->name = name;
            this->age = age;
            this->address = address;
            this->mat_score = mat_score;
            this->lit_score = lit_score;
            this->eng_score = eng_score;
        }

        double calc_media() {
            return (this->mat_score + this->lit_score + this->eng_score)/3;
        }

         void disp() {
            cout << "_____________________________" << endl;
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Address: " << this->address << endl;
            cout << "Maths score: " << fixed << setprecision(1) << this->mat_score << endl;
            cout << "Liturature score: " << fixed << setprecision(1) << this->lit_score << endl;
            cout << "English score: " <<  fixed << setprecision(1) << this->eng_score << endl;
            cout << "Media score: "<< fixed << setprecision(2) << this->calc_media() << endl;
        }

};

int main() {

    cout << "Enter name: ";
    string name;
    getline(cin, name);

    cout << "Enter address: ";
    string address;
    getline(cin, address);

    cout << "Enter age: ";
    int age;
    cin >> age;

    cout << "Enter score of 3 subjects: ";
    double mat, lit, eng;
    cin >> mat >> lit >> eng;

    student obj(name, age, address, mat, lit, eng);
    obj.disp();
    
    return 0;
}

