#include <iostream>
#include <string.h>
#include <vector>

void MoveStrings(std::vector<std::string>& source, std::vector<std::string>& destination)
{
    destination.insert(destination.end(), source.begin(), source.end());
    source.clear();
}