#include <iostream>
#include <map>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string text = { "Hello world!!" };

    std::cout << "\n[IN]: " << text;

    std::cout << "\n[OUT]:";

    std::map<char, int> symb;

    for (const char& it : text)
    {
        symb[it]++;
    }

    std::multimap<int, char, std::greater<>> sym;

    for (const auto& pair : symb)
    {
        sym.insert(std::make_pair(pair.second, pair.first));
    }

    for (const auto& pair : sym)
    {
        std::cout << "\n" << " " << pair.second << ":  " << pair.first;
    }

    std::cout << "\n";

    return 0;
}