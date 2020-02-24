// rangesEntireContainer.cpp

#include <iostream>
#include <ranges>
#include <string>
#include <unordered_map>


int main() {
    
    std::unordered_map<std::string, int> freqWord{ {"witch", 25}, {"wizard", 33}, {"tale", 45},
                                                   {"dog", 4}, {"cat", 34}, {"fish", 23} };
    
    std::cout << "Keys" << std::endl;
    auto names = std::views::keys(freqWord);
    for (const auto& name : names){ std::cout << name << " "; };
    std::cout << std::endl;
    for (const auto& name : std::views::keys(freqWord)){ std::cout << name << " "; };
    
    std::cout << "\n\n";
    
    std::cout << "Values: " << std::endl;
    auto values = std::views::values(freqWord);
    for (const auto& value : values){ std::cout << value << " "; };
    std::cout << std::endl;
    for (const auto& value : std::views::values(freqWord)){ std::cout << value << " "; }
                           
}
