#include <iostream>
#include <iomanip> // Untuk std::setprecision dan std::fixed
#include "algorithm.hpp"

int main() {
    int start, end;

    // Input rentang angka dari pengguna
    std::cout << "Masukkan rentang angka (start end): ";
    std::cin >> start >> end;

    // Validasi input
    if (start > end || start < 0 || end < 0) {
        std::cerr << "Rentang tidak valid. Pastikan start <= end dan angka >= 0." << std::endl;
        return 1;
    }

    // Mengukur waktu eksekusi metode iteratif
    double timeIterative = measureExecutionTimeIterative(start, end);

    // Mengukur waktu eksekusi metode rekursif
    double timeRecursive = measureExecutionTimeRecursive(start, end);

    // Tampilkan hasil bilangan prima
    std::cout << "\nBilangan prima dalam rentang [" << start << ", " << end << "]:\n";

    std::cout << "Iteratif: ";
    for (int prime : findPrimesIterative(start, end)) {
        std::cout << prime << " ";
    }

    std::cout << "\nRekursif: ";
    for (int prime : findPrimesRecursive(start, end)) {
        std::cout << prime << " ";
    }

    // Tampilkan waktu eksekusi dengan presisi tinggi
    std::cout << "\n\nWaktu eksekusi:\n";

    // Set precision dan fixed untuk memastikan format waktu eksekusi
    std::cout << std::fixed << std::setprecision(6); // Tampilkan 6 digit setelah desimal

    std::cout << "Iteratif: " << timeIterative << " detik.\n";
    std::cout << "Rekursif: " << timeRecursive << " detik.\n";

    return 0;
}
