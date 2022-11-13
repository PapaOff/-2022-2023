# Зад 1. ➕
Напишете функция ``int sum(int array[], int size)``, която по подаден масив и размер връща сумата на всички негови елементи

Test cases:  
```cpp
int n1[5] {1,1,1,1,1};  
int n2[5] {1,2,3,4,5};  
std::cout << sum(n1, 5) << std::endl;
std::cout << sum(n2, 5) << std::endl;
```
Output:
```
5
15
```

# Зад 2. 🔄
Напишете функция ``void mySwap(<подходящ тип> a, <подходящ тип> b)``, която сменя стойностите на подадените елементи - a и b  
Side note: не се се казва ``swap``, защото има вече такава вградена 

Test cases:
```cpp
int a = 1, b = 2, c = 3;
mySwap(a, b);
mySwap(b, c);
std::cout << a << " " << b << " " << c << std::endl;
```
Output:
```
2 3 1
```

# Зад 3. 👉
Даден е следният програмен откъс:
```cpp
#include <iostream>

int main()
{
    int a, b;
    int incrBy;

    std::cout << "Enter 2 numbers:";
    std::cin >> a >> b;
    std::cout << "Increment both numbers by:";
    std::cin >> incrBy;

    //TODO...
}
```
Да се допише кода така, че числата a и b да се увеличат с incrBy, след което да се отпечатат стойностите както и техните адреси, но всичко това без директно да използвате a и b.

*Подсказка: използвайте указател* 