﻿
Функция IsKPeriodic, которая проверяет, является ли строка кратной числу K .
```
```
``` c++ bool IsKPeriodic(const std::string& str, int K) {
    // Проверяем, что K больше 0
    if (K <= 0) {
        return false;
    }
```
```c++
    int len = str.length();

    // Проверяем, что длина строки кратна K
    if (len % K != 0) {
        return false;
    }
```
``` c++
    // Проверяем для каждой подстроки длины K, что она повторяется
    for (int i = 0; i < len - K; i++) {
        if (str[i] != str[i % K]) {
            return false;
        }
    }

    return true;
}
```

