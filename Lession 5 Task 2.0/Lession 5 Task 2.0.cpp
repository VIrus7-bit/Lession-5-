#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {

    using namespace std;
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите размер массива:";cin >> n;

    set<int> numbers; 

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Введите значения массива " << i << " : "; cin >> num;
        numbers.insert(num);
    }
    std::vector<int> uniqueNumbers(numbers.begin(), numbers.end());

    // Сортируем вектор в порядке убывания
    std::sort(uniqueNumbers.rbegin(), uniqueNumbers.rend());

    // Выводим результат
    cout << "Результат:" << endl;
    for (const int& num : uniqueNumbers) {
        std::cout << num << std::endl;
    }
    system("pause");
    return 0;
}