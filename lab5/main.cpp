#include <iostream>

int Search(int n, int* arr, int key)
{
    int search_index;
    for (int i=0; i<n; i++)
    {
        if (arr[i]==key)
        {
            search_index = i;
            if (search_index==0)
                break;
            else
            {
                std::swap(arr[i], arr[i-1]);
            }
        }
    }
    return search_index;
}

int main() {
    int n;
    std::cout << "Enter the size of array: " << std::endl;
    std::cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        std::cout << "arr[" << i << "]=";
        std::cin >> arr[i];
    }
    int key;
    std::cout << "Enter the number to search: " << std::endl;
    std::cin >> key;


    for (int k=1; k<=5; k++)
    {
        std::cout << "Number " << key << " has index " << Search(n, arr, key) << std::endl;
    }
    return 0;
}
