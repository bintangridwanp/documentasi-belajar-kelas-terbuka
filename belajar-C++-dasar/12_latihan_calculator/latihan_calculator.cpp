//
// Created by ThinkpadX270 on 28/10/2024.
//

#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    int hasil;
    char input;

    cout << "Masukan angka pertama :";
    cin >> a;

    cout << "Masukan operator aritmatika + - / * :";
    cin >> input;

    cout << "Masukan angka kedua :";
    cin >> b;

    if (input == '+') {
        hasil = a + b;
    } else if (input == '-') {
        hasil = a - b;
    } else if (input == '/') {
        hasil = a / b;
    } else if (input == '*') {
        hasil = a * b;
    }

    cout << hasil <<endl;

    return 0;
}