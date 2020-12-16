#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int index, n, bit;

  	std::cin >> n;

    while (n != 0)
    {
        bit = n % 2;
        vec.push_back(bit);
        n = (n - bit) / 2;
    }

    int size = vec.size();
    for (size; size >= 0; size -= 1)
    {
        if (vec[size] == 1)
        {
            break;
        }
    }

    for (; size >= 0; size -= 1)
    {
        std::cout << vec[size];
    }

  	return 0;
}