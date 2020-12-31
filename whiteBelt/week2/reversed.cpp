#include <iostream>
#include <vector>


void Reverse(std::vector<int>& v)
{
    int len = v.size(), temp; 

    for (int index = 0; index < len / 2; index += 1)
    {
        temp = v[index];
        v[index] = v[len - 1 - index];
        v[len - 1 - index] = temp;
    }
}

std::vector<int> Reversed(const std::vector<int>& v)
{
    std::vector<int> ans = v;
    
    Reverse(ans);

    return ans;
}