#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 19, 44, 32, 54, 78, 99, 39, 29, 432, 34, 0, 90, 2, 52, 55};

    // finding the  largest and smallest number in the array

    int min = INT_MAX;
    int smin = INT_MAX;
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        if (arr[i] < min)
        {
            smin = min;
            min = arr[i];
        }
    }

    cout << "minimum element " << min << endl;
    cout << "Second minimum element " << smin << endl;
    cout << "maximum element " << max << endl;
    cout << "Second maximum element " << smax << endl;
    return 0;
}