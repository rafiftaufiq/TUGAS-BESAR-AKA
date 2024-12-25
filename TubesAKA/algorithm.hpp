#ifndef PRIME_HPP
#define PRIME_HPP

#include <vector>
#include <chrono>

// Fungsi untuk memeriksa apakah angka adalah bilangan prima (rekursif)
bool isPrimeRecursive(int n, int i = 2);

// Fungsi untuk memeriksa apakah angka adalah bilangan prima (iteratif)
bool isPrimeIterative(int n);

// Fungsi untuk mencari bilangan prima dalam rentang menggunakan metode iteratif
std::vector<int> findPrimesIterative(int start, int end);

// Fungsi untuk mencari bilangan prima dalam rentang menggunakan metode rekursif
std::vector<int> findPrimesRecursive(int start, int end);

// Fungsi untuk mengukur waktu eksekusi metode iteratif
double measureExecutionTimeIterative(int start, int end);

// Fungsi untuk mengukur waktu eksekusi metode rekursif
double measureExecutionTimeRecursive(int start, int end);

#endif // PRIME_HPP

