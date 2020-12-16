#include <iostream>

int main() {
    int index, a, b, max, ans;

  	std::cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }

    std::cout << a + b << std::endl;

  	return 0;
}