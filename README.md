# SF 12.7.1
## ������� IsKPeriodic, ������� ���������, �������� �� ������ ������� ����� K.
```c++
bool IsKPeriodic(const std::string& str, int K) {
    // ���������, ��� K ������ 0
    if (K <= 0) {
        return false;
    }

    int len = str.length(); 
  ```
  ``` c++
  // ���������, ��� ����� ������ ������ K
    if (len % K != 0) {
        return false;
    }
```
``` c++
 
    for (int i = 0; i < len - K; i++) {
        if (str[i] != str[i % K]) {
            return false;
        }
    }

    return true; 
