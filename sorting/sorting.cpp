#include <iostream>
#include <vector>

std::vector<int> merge_sort(std::vector<int> arr)
{
    // step 1 - break a vector up into two halves and return the first half - Nice!
    std::vector<int> left_half(arr.begin(), arr.begin() + arr.size()/2);
    std::vector<int> right_half(arr.begin() + arr.size()/2, arr.begin() + arr.size());
    return right_half;
}

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
    std::vector<int> vec = {125, 68, 23, 56, 400};
    std::cout << "The unsorted vector contains the following elements: ";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
    
    std::vector<int> result = merge_sort(vec);

    std::cout << "After sorting the result is: ";
    for(int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << "  ";
    }
    std::cout << std::endl;

    
}