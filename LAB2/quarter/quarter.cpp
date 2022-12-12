#include <iostream>
using namespace std;

int main () { 
    int a;
    cin >> a;
    while(1){
        if ((a<=0) || (a>12)) {
            cout << "Please input again" << endl;
            cin >> a;
        }
        else {
            break;
        }
    }
    if ((a >= 1) && (a <= 3)) { 
        cout <<"1"<< endl;
    }
    else if ((a >= 4) && (a <= 6)) { 
        cout <<"2"<< endl;
    }
    else if ((a >= 7) && (a <= 9)) { 
        cout <<"3"<< endl;
    }
    else if ((a >= 10) && (a <= 12)) { 
        cout <<"4"<< endl;
    }

    
    

    
    return 0;





}