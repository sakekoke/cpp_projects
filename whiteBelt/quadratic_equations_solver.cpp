#include <iostream>
#include <cmath>

int main() {
  	double a, b, c, disc;

  	std::cin >> a >> b >> c;

    disc = b * b - 4 * a * c;

    if (a == 0)
    {
        if (b != 0)
        {
            std::cout << (-c / b);
        }
    }
    else if (disc == 0)
    {
        std::cout << (-b / (a * 2));
    }
    else if (disc > 0)
    {
        std::cout << ((-b + sqrt(disc)) / (a * 2)) << " " << ((-b - sqrt(disc)) / (a * 2));
    }
  	return 0;
}