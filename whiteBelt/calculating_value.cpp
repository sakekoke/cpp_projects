#include <iostream>
#include <cmath>

int main() {
  	double n, a, b, x, y;

  	std::cin >> n >> a >> b >> x >> y;

    if (n > b)
    {
        n -= n * y / 100;
    }
    else if (n > a)
    {
        n -= n * x / 100;
    }
    
    std::cout << n << std::endl;

  	return 0;
}