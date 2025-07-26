#include <iostream>

using namespace std;

int main() {

    double n;

    cin >> n;

    n = n - (int)n;

    if(n < 0) n *= -1;

    int p = (int)(n * 10);

    cout << p;
    return 0;
}