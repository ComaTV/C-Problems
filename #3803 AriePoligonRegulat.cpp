#define _USE_MATH_DEFINES  
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n, l;

    cin >> n >> l;
    
    double A_POLIGON = (n * l*l)/(4*tan(M_PI/n));

    int temp = A_POLIGON * 100;
    A_POLIGON = temp /100.0;
    
    cout << fixed << setprecision(2) << A_POLIGON;
    return 0;
}