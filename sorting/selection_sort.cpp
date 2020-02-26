#include <iostream>
#include <vector>

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
    std::vector<int> vec = {125, 68, 23, 56, 400};
    std::cout << "The unsorted vector contains the following elements: ";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
    
    selection_sort(vec);

    std::cout << "After sorting the result is: ";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
}