#include <iostream>
#include <vector>
#include <set>

std::vector<int> unionSortedArrays(const std::vector<int> &arr1, const std::vector<int> &arr2)
{
    std::set<int> resultSet;

    // Insert elements from arr1 into the set
    for (int num : arr1)
    {
        resultSet.insert(num);
    }

    // Insert elements from arr2 into the set
    for (int num : arr2)
    {
        resultSet.insert(num);
    }

    // Convert the set to a vector
    std::vector<int> result(resultSet.begin(), resultSet.end());

    return result;
}

int main()
{
    std::vector<int> arr1 = {1, 2, 4, 5, 6};
    std::vector<int> arr2 = {2, 3, 5, 7};

    std::vector<int> result = unionSortedArrays(arr1, arr2);

    std::cout << "Union of sorted arrays: ";
    for (int num : result)
    {
        std::cout << num << " ";
    }

    return 0;
}
