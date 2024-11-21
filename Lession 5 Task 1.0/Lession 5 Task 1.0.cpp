#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>

int main() {

    using namespace std;
    setlocale(LC_ALL, "Rus");
    string input;
    cout << "Введите текст: "; getline(cin, input);

    std::unordered_map<char, int> freq;

    for (char ch : input) {
        freq[ch]++;
    }

    std::vector<std::pair<char, int>> freqVec(freq.begin(), freq.end());

    std::sort(freqVec.begin(), freqVec.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return a.second > b.second;
        });

    for (const auto& pair : freqVec) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}