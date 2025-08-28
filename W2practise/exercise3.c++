#include <iostream>
using namespace std;

// Iterative factorial with counter
int factorialIter(int n, int &counter) {
    int result = 1;
    counter = 0;
    for (int i = 2; i <= n; i++) {
        result *= i;
        counter++;
    }
    return result;
}

// Recursive factorial with counter
int factorialRec(int n, int &counter) {
    counter++;
    if (n <= 1) return 1;
    return n * factorialRec(n - 1, counter);
}

int main() {
    int n = 5;
    int iterCount = 0, recCount = 0;
    int factIter = factorialIter(n, iterCount);
    int factRec = factorialRec(n, recCount);
    cout << n << "! iterative = " << factIter << ", iterations = " << iterCount << endl;
    cout << n << "! recursive = " << factRec << ", calls = " << recCount << endl;
    return 0;
}
