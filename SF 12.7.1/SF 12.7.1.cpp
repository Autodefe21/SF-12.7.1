
#include <iostream>
#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int K) {
    if (K <= 0) {
        return false;
    }

    int len = str.length();

    
    if (len % K != 0) {
        return false;
    }

    
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
    std::string str = "abcabcabcabc";
    int K = 4;

    if (IsKPeriodic(str, K)) {
        std::cout << "Строка является кратной числу " << K << std::endl;
    }
    else {
        std::cout << "Строка не является кратной числу " << K << std::endl;
    }

    return 0;
}

