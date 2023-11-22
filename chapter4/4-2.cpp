#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main() {
    for (unsigned int i = 1; i < 101; i++) {
        cout << setw(3) << i << setw(6) << i * i << endl;
    }
    return 0;
}