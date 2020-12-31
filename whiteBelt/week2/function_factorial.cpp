#include <iostream>
#include <vector>

int Factorial(int fact)
{
    int ans = 1;
    if (fact > 1)
    {
        for (int index = 2; index <= fact; index += 1)
        {
            ans *= index;
        }
    }
    return ans;
}

int main() {
    int n;

  	std::cin >> n;

    std::cout << Factorial(n);

  	return 0;
}