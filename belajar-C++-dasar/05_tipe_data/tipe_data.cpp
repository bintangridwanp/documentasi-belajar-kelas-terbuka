//
// Created by ThinkpadX270 on 07/10/2024.
//
#include <iostream>
#include <limits>
using namespace std;

int main(){

    //bilangan bulat
    int a = 2;
    long b = 3;
    short c = 4;

    //bilangan decimal
    float d = 2.0;
    double e = 3.0;

    //character
    char f = 'f';

    //boolean
    bool g = false;



    cout << c << endl;

    //untuk mengetahui ukuran byte sizeof()
    cout << sizeof(c) << endl;

    //mengetahui ukuran maksimal nilai yang bisa di tampung
    cout << numeric_limits<short>::max() << endl;

    //mengetahui ukuran minimal nilai yang bisa di tampung
    cout << numeric_limits<short>::min() << endl;

    cin.get();

    return 0;

}