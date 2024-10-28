//
// Created by ThinkpadX270 on 26/10/2024.
//

#include "iostream"

using namespace std;

int main(){

    int a = 100;
    int b = 100;
    int c = 500;

    bool hasil1, hasil2;

    hasil1 = (a == b) && (a == c);
    hasil2 = (a == b) || (a == c);

    cout << hasil1 << endl;

    cout << hasil2 << endl;

    return 0;

}
