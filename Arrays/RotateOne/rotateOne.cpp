#include <iostream>
#include <vector>

void printVector(const std::vector<int> &vec)
{
    for (int x : vec)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

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

std::vector<int> rotate(std::vector<int> &vect, int size)
{
    std::vector<int> vec = vect;

    // storing our rotating value in array
    std::vector<int> newArr;

    // Copy the first 'size' elements to the new vector
    for (int i = 0; i < size; i++)
    {
        newArr.push_back(vec[i]);
    }

    // rotating remaining values to the right side
    for (int i = 0; i < vec.size() - size; i++)
    {
        vec[i] = vec[i + size];
    }

    // Copy the rotating values to the end of the vector
    for (int i = 0; i < size; i++)
    {
        vec.push_back(newArr[i]);
    }

    return vec;
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    // Rotate one position
    std::cout << "Rotating one position:" << std::endl;
    rotateOne(arr);
    printVector(arr);

    // Reset array for the next rotation
    arr = {1, 2, 3, 4, 5, 6, 7};

    // Rotate a specific number of positions
    int rotationSize = 2;
    std::cout << "\nRotating " << rotationSize << " positions to the right:" << std::endl;
    std::vector<int> rotatedArr = rotate(arr, rotationSize);
    printVector(rotatedArr);

    return 0;
}
