#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is square-free
bool isSquareFree(int num) {
    // Check divisibility by square of prime numbers
    for (int i = 2; i * i <= num; ++i) {
        if (num % (i * i) == 0) {
            return false; // Not square-free if divisible by i^2
        }
    }
    return true;
}

// Function to find all divisors of N
void findSquareFreeDivisors(int N) {
    int count = 0;

    // Find divisors of N
    for (int i = 1; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            // Check if divisor i is square-free
            if (i != 1 && isSquareFree(i)) {
                count++;
            }

            // Check the corresponding divisor N / i if it's not the same as i
            if (i != N / i) {
                if (N / i != 1 && isSquareFree(N / i)) {
                    count++;
                }
            }
        }
    }

    // Output the result
    cout << count << endl;
}

int main() {
    int N;
    cin >> N; // Input the number N
    findSquareFreeDivisors(N); // Find and print the square-free divisors count
    return 0;
}
