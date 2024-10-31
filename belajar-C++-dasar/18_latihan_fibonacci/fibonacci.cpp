//
// Created by ThinkpadX270 on 30/10/2024.
//

#include <iostream>
using namespace std;

int main() {

    int input;
    cout << "Masukan angka fibonacci: ";
    cin >> input;
    int a = 0;
    int b = 1;

    for (int i = 0; i < input; ++i) {

        int hasil = a + b;
        cout << hasil << " ";
        a = b;
        b = hasil;

    }

}