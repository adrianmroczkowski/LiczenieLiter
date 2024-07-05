#include <iostream>
#include <string>
#include <map>
#include <cctype>

// Funkcja do liczenia wyst¹pieñ liter w tekœcie
std::map<char, int> countLetters(const std::string& text) {
    std::map<char, int> letterCount;
    for (char ch : text) {
        if (std::isalpha(ch)) {
            ch = std::tolower(ch); // Zmiana na ma³¹ literê dla konsystencji
            letterCount[ch]++;
        }
    }
    return letterCount;
}

int main() {
    std::string text;

    std::cout << "Enter a text: ";
    std::getline(std::cin, text);

    std::map<char, int> result = countLetters(text);

    std::cout << "Letter counts:\n";
    for (const auto& pair : result) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    return 0;
}
