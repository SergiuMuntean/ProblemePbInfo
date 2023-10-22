#include <stdio.h>

void readArray(int* array, int* size, int* groups)
{
    scanf("%d%d", size, groups);
    for(int i = 0; i < *size; i++)
        scanf("%d", &array[i]);
}

int compareSequences(int* array, int size, int groups, int* seq1, int* seq2)
{
    int increment = size / groups;
    *seq1 = 0, *seq2 = 0;

    for(int i = 0; i < size; i += increment)
    {
        for(int j = i + increment; j < size; j += increment)
        {
            int match = 1;
            for(int k = i, l = j; k < i + increment; k++, l++)
            {
                if(array[k] != array[l])
                {
                    match = 0;
                    break;
                }
            }
            if (match)
            {
                *seq1 = i / increment + 1;
                *seq2 = j / increment + 1;
                return 0;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[1000], dim, k, index1, index2;
    readArray(arr, &dim, &k);
    int result = compareSequences(arr, dim, k, &index1, &index2);

    if (result == -1)
        printf("NU");
    else
        printf("%d %d", index1, index2);

    return 0;
}
