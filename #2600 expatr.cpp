#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double n, n1,n2, nQ;

    cin >> n;

    n1 = (n*n)+(n*n*n*n);
    nQ = sqrt(n1);

    n = 3*(n1);
    n = n / (n1 + nQ) + nQ;

    cout << (int) n;
    return 0;
}