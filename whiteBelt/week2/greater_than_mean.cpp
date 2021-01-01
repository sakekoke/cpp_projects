#include <iostream>
#include <vector>


int main()
{
    int n, mean;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i += 1)
    {
        std::cin >> v[i];
        mean += v[i];
    }
    mean /= n;
    
    std::vector<int> ans;
    for (int i = 0; i < n; i += 1)
    {
        if (v[i] > mean)
        {
            ans.push_back(i);
        }
    }

    std::cout << ans.size() << std::endl;
    for (int i = 0; i < ans.size(); i += 1)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}