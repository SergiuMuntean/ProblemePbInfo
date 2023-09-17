#include <iostream>

int find1(int* array, int size, int value)
{
    //this is O(n)

    int searches = 0;

    for (int i = 0; i < size; i++)
    {
        searches++;
        if (array[i] == value)
        {
            std::cout << "Searches for O(n): " << searches << std::endl;
            return i;
        }
    }

    return -1;
}

int find2(int* array, int size, int value)
{
    //this is O(logn)

    int searches = 0;
    int begin = 0;
    int end = size;

    while (begin != end)
    {
        searches++;
        int i = (begin + end) / 2;
        if (array[i] == value)
        {
            std::cout << "Searches for O(logn): " << searches << std::endl;
            return i;
        }

        if (array[i] < value)
            begin = i + 1;
        else
            end = i;
    }

    return -1;
}

int main()
{
    int array[] = { 1, 2, 4, 6, 7, 10, 11, 17, 20, 28 };

    int f1 = find1(array, 10, 20);
    int f2 = find2(array, 10, 20);

    std::cout << "Index for O(n): " << f1 << std::endl;
    std::cout << "Index for O(logn): " << f2 << std::endl;


    return 0;
}
