//
// Created by ThinkpadX270 on 30/10/2024.
//
#include <iostream>
using namespace std;

int main(){

    cout << "Contoh penggunaan continue:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // lewati iterasi jika i adalah bilangan genap
        }
        cout << i << " ";
    }
    cout << endl;

}