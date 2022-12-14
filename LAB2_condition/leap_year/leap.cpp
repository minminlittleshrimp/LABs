#include <iostream> 
using namespace std;

int main () {
    int x;
    cin >> x;
    // (chia  cho 4 v ko chia  cho 100) || (chia  cho  c 4 v 100)
    if (((x%4==0)&&(x%100!=0))||(x%400==0)) {
        cout << "YES"<< endl;
    }
    else {
        cout <<"NO"<< endl;
    }
    return 0;

}