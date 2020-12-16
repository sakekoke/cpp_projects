#include <iostream>
#include <string>

int main() {
  	std::string str;
    int count = 0, index;

  	std::cin >> str;

    for (index = 0; index < str.length(); index += 1)
    {
        if (str[index] == 'f')
        {
            count += 1; 
        }
        if (count == 2)
        {
            break;
        }
    }

    if (count == 0)
    {
        std::cout << -2 << std::endl;
    }
    else if (count == 1)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << index << std::endl;
    }

  	return 0;
}