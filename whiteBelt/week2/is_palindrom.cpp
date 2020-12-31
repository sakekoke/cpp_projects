#include <iostream>
#include <string.h>

bool IsPalindrom(std::string str)
{
    int len = str.length();
    for (int i = 0, j = len - 1; i < len / 2; i += 1, j -= 1)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

int main() {
    std::string n;

  	std::cin >> n;

    std::cout << IsPalindrom(n) << std::endl;

  	return 0;
}