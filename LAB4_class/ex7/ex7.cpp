#include <iostream>
using namespace std;

class vector {
    private:
        int size;
        int *vect;
    public:
        //Initialize vector
        vector(int size) {
            //Init size
            this->size = size;
            //Dynamically alloc pointer vect
            this->vect = new int[size];
        }

        void set(int idx, int val) {
            this->vect[idx] = val;
        }

        int get(int idx) {
            return this->vect[idx];
        }

        void get_all() {
            for (int i = 0; i < this->size; i++) {
                cout << this->vect[i] << " ";
            }
            cout << endl;
        }

        int get_max() {
            int mx = this->vect[0];
            for (int i=1; i<this->size; i++) {
                if (mx < this->vect[i]) {
                    mx =this->vect[i];
                }
            }
            return mx;
        }

        int get_min() {
            int mn = this->vect[0];
            for (int i=1; i<this->size; i++) {
                if (mn > this->vect[i]) {
                    mn =this->vect[i];
                }
            }
            return mn;
        }

        void asc_sort() {
            for (int i=0; i<size-1; i++) {
                for (int j=i+1; j<size; j++) {
                    if (this->vect[i] > this->vect[j]) {
                        int tmp;
                        tmp = this->vect[i];
                        this->vect[i] = this->vect[j];
                        this->vect[j] = tmp;
                    }
                }
            } 
        }

        void des_sort() {
            for (int i=0; i<size-1; i++) {
                for (int j=i+1; j<size; j++) {
                    if (this->vect[i] < this->vect[j]) {
                        int tmp;
                        tmp = this->vect[i];
                        this->vect[i] = this->vect[j];
                        this->vect[j] = tmp;
                    }
                }
            } 
        }
};

int main() {
    int n;
    cin >> n;
    vector vect(n);
    for (int i = 0; i<n; i++) {
        int val;
        cin >> val;
        vect.set(i, val);
    }

    cout << "Max: " << vect.get_max() << endl;
    cout << "Min: " << vect.get_min() << endl;

    vect.asc_sort();
    cout << "Sorting ascending: ";
    vect.get_all();

    vect.des_sort();
    cout << "Sorting descending: ";
    vect.get_all();

    return 0;
}

// 5
// 4 5 8 2 1
// 4
// 1 5 4 6
// Max: 8
// Min: 1
// Sorting ascending: 1 2 4 5 8
// Sorting descending: 8 5 4 2 1
// Sum of elements: 20
// Multiply of elements: 420
// Is there any same value? NO
// Assign values from new_vect = vect - 1: new_vect = {3,4,7,1,0}
