#include <iostream>
#include <vector>
#include <initializer_list>

template <typename T>
class Tool {
    std::vector<T> parts;
public:
    Tool(const std::initializer_list<T>& inPart) {
        parts = inPart;
    }

    std::vector<T> GetArray() {
        return parts;
    }
};

int main() {
    Tool<int> t = {1,2,3,4,5};
    for (auto i: t.GetArray())
        std::cout << i << ' ';
}