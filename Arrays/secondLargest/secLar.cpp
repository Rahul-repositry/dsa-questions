#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7, 7, 7, 7, 7, 7, 7, 7, 7};

    // finding the second largest number in the array

    int i = 1;
    int n = arr.size();

    int last = arr[n - i];

    int secLast = arr[n - (i + 1)];

    while (secLast == last)
    {
        i++;
        secLast = arr[n - (i + 1)];
    }

    cout << "second last element of the array is " << secLast << endl;

    return 0;
}