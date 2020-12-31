#include <iostream>
#include <string.h>
#include <vector>

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

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int minLength)
{
    vector<std::string> less;

    for (int index = 0; index < words.size(); index += 1)
    {
        if (IsPalindrom(words[index]) && words[index].length() >= minLength)
        {
            less.push_back(words[index]);
        }
    }

    return less;
}