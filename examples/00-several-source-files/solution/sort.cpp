#include "sort.h"

#include <algorithm>

void sort(std::vector<Item>& items) {
    std::stable_sort(items.begin(), items.end(), [](const Item& lhs, const Item& rhs) {
        return lhs.key < rhs.key;
    });
}
