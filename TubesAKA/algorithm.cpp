#include "algorithm.hpp"
#include <cmath>

// Fungsi untuk memeriksa apakah angka adalah bilangan prima (rekursif)
bool isPrimeRecursive(int n, int i) {
    if (n <= 1) return false;
    if (i > sqrt(n)) return true;
    if (n % i == 0) return false;
    return isPrimeRecursive(n, i + 1);
}

// Fungsi untuk memeriksa apakah angka adalah bilangan prima (iteratif)
bool isPrimeIterative(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Fungsi untuk mencari bilangan prima dalam rentang menggunakan metode iteratif
std::vector<int> findPrimesIterative(int start, int end) {
    std::vector<int> primes;
    for (int i = start; i <= end; ++i) {
        if (isPrimeIterative(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

// Fungsi untuk mencari bilangan prima dalam rentang menggunakan metode rekursif
std::vector<int> findPrimesRecursive(int start, int end) {
    std::vector<int> primes;
    for (int i = start; i <= end; ++i) {
        if (isPrimeRecursive(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

// Fungsi untuk mengukur waktu eksekusi metode iteratif
double measureExecutionTimeIterative(int start, int end) {
    auto start_time = std::chrono::high_resolution_clock::now();
    findPrimesIterative(start, end);
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end_time - start_time;
    return duration.count();
}

// Fungsi untuk mengukur waktu eksekusi metode rekursif
double measureExecutionTimeRecursive(int start, int end) {
    auto start_time = std::chrono::high_resolution_clock::now();
    findPrimesRecursive(start, end);
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end_time - start_time;
    return duration.count();
}

