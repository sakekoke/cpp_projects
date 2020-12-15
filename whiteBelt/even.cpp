#include <iostream>
#include <cmath>

int main() {
  	int a, b, index;

  	std::cin >> a >> b;

    for (index = a; index <= b; index += 1)
    {
        if (index % 2 == 0)
        {
            std::cout << index << std::endl;
        }
    }

  	return 0;
}