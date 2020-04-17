#include <iostream>
#include <cmath>

using namespace std;

double calcfirstRoot(double a, double b, double c){
    return (-b+sqrt(pow(b, 2) - 4*a*c))/2*a;
}

double calcsecondRoot(double a, double b, double c){
    return (-b-sqrt(pow(b, 2) - 4*a*c))/2*a;
}

double calcequalRoot(double a, double b){
    return (-b)/2*a;
}

int main(){
    double a;
    double b;
    double c;

    cout << "Quadratic calculator" << endl;

    cout << "Enter the value of a: "; cin >> a;
    cout << "Enter the value of b: "; cin >> b;
    cout << "Enter the value of c: "; cin >> c;

    while (a == 0){
        cout << "a must not be equal to 0" << endl;
        cout << "Enter the value of a: "; cin >> a;
    }

    if (pow(b, 2)-4*a*c > 0){
        cout << "Inputed values" << endl;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "Calculated values" << endl;
        cout << "x1: " << calcfirstRoot(a, b, c) << endl;
        cout << "x2: " << calcsecondRoot(a, b, c) << endl;
    }else if (pow(b, 2)-4*a*c == 0){
        cout << "Inputed values" << endl;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "Calculated values" << endl;
        cout << "x1, x2: " << calcequalRoot(a, b) << endl;
    }else if (pow(b, 2)-4*a*c < 0){
        cout << "Complex solution" << endl;
    }

    return 0;
}
