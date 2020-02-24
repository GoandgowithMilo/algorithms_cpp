#include <iostream>
#include <vector>
#include <chrono>

void bubble_sort(std::vector<int> &arr)
{
    bool sorted = false;
    int temp;

    while(!sorted)
    {
        sorted = true;
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i-1] > arr[i])
            {
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                sorted = false;
            }
        }
    }
}

void selection_sort(std::vector<int> &arr)
{
    int smallest;
    int temp;

    for(int i = 0; i < arr.size(); i++)
    {
        smallest = i;
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    std::vector<int> vec = {68, 23, 56, 125, 400, 12, 7, 36, 100, 6000, 12000, 50000, 3, 44, 77, 62, 15};
    std::cout << "The unsorted vector contains the following elements: ";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;

    auto start = std::chrono::high_resolution_clock::now();
    selection_sort(vec);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(stop - start);
    std::cout << "Sorting took " << duration.count() << " microseconds to run" << std::endl;

    std::cout << "After sorting the result is: ";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
    
}