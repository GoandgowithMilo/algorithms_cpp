#include <iostream>
#include <vector>

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

int main()
{
    std::vector<int> vec = {125, 68, 23, 56, 400};
    std::cout << "The unsorted vector contains the following elements: ";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
    
    bubble_sort(vec);

    std::cout << "After sorting the result is: ";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
}