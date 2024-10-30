//
// Created by ThinkpadX270 on 30/10/2024.
//

#include <iostream>
using namespace std;

int main() {

    cout << "Contoh penggunaan break:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "Loop dihentikan pada i = " << i << endl;
            break; // keluar dari loop ketika i bernilai 5
        }
        cout << i << " ";
    }

}