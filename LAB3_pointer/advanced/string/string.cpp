#include <iostream>
using namespace std;

int str_length(string &str) {
    int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    return count;
}

int str_length(char *ptr) {
    int count = 0;
    while(*ptr != '\0') {
        count++;
        ptr++;
    }
    return count;
}

void str_copy(string &str, string &new_str) {
    int idx = 0;
    while(str[idx] != '\0') {
        new_str += str[idx];
        idx++;
    }
}

void str_copy(string *ptr_str, string *ptr_new_str) {
    *ptr_new_str = *ptr_str;
}

string str_concatenate(string &str, string &sec_str) {
    return str + " " + sec_str;
}

string str_concatenate(string *ptr_str, string *ptr_sec_str) {
    return *ptr_str + " " + *ptr_sec_str;
}

int main () {

    string str;
    getline (cin, str);

    /*--------------------Without pointer-------------------------*/
    /* Find string length */
    //cout << str_length(str) << endl;

    /* Copy string */
    // string new_str;
    // str_copy(str, new_str);
    // cout << new_str << endl;

    /* Concatenate */
    // string sec_str;
    // getline (cin,sec_str);
    // cout << str_concatenate(str, sec_str) << endl;

    /*--------------------With pointer-------------------------*/
    /* Find string length */
    //cout << str_length(&str[0]) << endl;


    /* Copy string */
    // string new_str;
    // str_copy(&str, &new_str);
    // cout << new_str << endl;

    /* Concatenate */
    string sec_str;
    getline (cin,sec_str);
    cout << str_concatenate(&str, &sec_str) << endl;
}