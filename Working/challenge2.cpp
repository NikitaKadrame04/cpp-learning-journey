#include <iostream>
using namespace std;

int main() {
    bool prime;

    for (int i = 1; i <= 100; i++) {
        prime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << i << " ";
        }
    }

    return 0;
}