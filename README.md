# SF 12.7.1
## ������� IsKPeriodic, ������� ���������, �������� �� ������ ������� ����� K.
```
bool IsKPeriodic(const std::string& str, int K) {
    // ���������, ��� K ������ 0
    if (K <= 0) {
        return false;
    }

    int len = str.length(); 
  ```
  
