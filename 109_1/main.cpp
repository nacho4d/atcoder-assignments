#include <iostream>

using namespace std;
 
int main(void) {
    int a, b;
    cin >> a >> b;
    int ab = a * b;
    
    // find odd number (espanish: numero impar)
    if ((ab * 1) % 2 == 1 || (ab * 2) % 2 == 1 || (ab * 3) % 2 == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
 
    return 0;
}