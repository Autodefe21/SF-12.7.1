# SF 12.7.1
## Функция IsKPeriodic, которая проверяет, является ли строка кратной числу K.
```c++
bool IsKPeriodic(const std::string& str, int K) {
    // Проверяем, что K больше 0
    if (K <= 0) {
        return false;
    }

    int len = str.length(); 
  ```
  
