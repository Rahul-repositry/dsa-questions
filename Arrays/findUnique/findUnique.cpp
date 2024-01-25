#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7};

    vector<int> newArr;

    newArr.push_back(arr[0]);

    int j = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[j] == arr[i])
            continue;
        newArr.push_back(arr[i]);
        j = i;
    }

    for (auto x : newArr)
    {
        cout << x << endl;
    }

    return 0;
}