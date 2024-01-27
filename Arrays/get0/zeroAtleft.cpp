#include <iostream>
#include <vector>

std::vector<int> rotateOne(std::vector<int> &vect)
{
    int tmp = vect[0];

    for (int i = 0; i < vect.size() - 1; i++)
    {
        vect[i] = vect[i + 1];
    }

    vect[vect.size() - 1] = tmp;

    return vect;
}

int main()
{
    std::vector<int> arr = {1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0};

    int i = arr.size() - 1;
    int j = 0;

    while (j < i)
    {
        if (arr[j] == 0)
        {
            std::swap(arr[i], arr[j]);
            i--;
        }
        else
        {
            j++;
        }
    }

    for (int x : arr)
    {
        std::cout << x << std::endl;
    }

    // Rotate one position

    return 0;
}
