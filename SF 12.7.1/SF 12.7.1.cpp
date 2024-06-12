
#include <iostream>
#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int K) {
    // Проверяем, что K больше 0
    if (K <= 0) {
        return false;
    }

    int len = str.length();

    // Проверяем, что длина строки кратна K
    if (len % K != 0) {
        return false;
    }

    // Проверяем для каждой подстроки длины K, что она повторяется
    for (int i = 0; i < len - K; i++) {
        if (str[i] != str[i % K]) {
            return false;
        }
    }

    return true;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string str = "abcdabcdabcdabcd";
    int K = 4;

    if (IsKPeriodic(str, K)) {
        std::cout << "Строка является кратной числу " << K << std::endl;
    }
    else {
        std::cout << "Строка не является кратной числу " << K << std::endl;
    }

    return 0;
}

