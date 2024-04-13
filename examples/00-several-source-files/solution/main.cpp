#include "item.h"
#include "sort.h"

#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    std::vector<Item> items;

    std::uint32_t key;
    std::string value;

    while (std::cin >> key >> value) {
        items.push_back({key, std::move(value)});
    }

    sort(items);

    for (const auto& item: items) {
        std::cout << item.key << '\t' << item.value << '\n';
    }
}

