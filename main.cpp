//Lab_02.cpp
//< Красноперова Валентина >
//Лабораторна робота No 2.1
//Лінійні програми.
//Варіант 8
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double y;
    double z1;
    double z2;

    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;

    z1 = cos (x)* cos(x)* cos(x)* cos(x)* cos(x) + sin(x)*sin(x) + 1./4* sin(2*x)* sin(2*x) -1;
    z2 = sin(y+x)*sin(y-x);
    //for second branch
    // for second branch 2.0
    // la ala al
    // la la ala la
    // eighth commit
    // 6666
    // gg
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cin.get();
    return 0;


}
