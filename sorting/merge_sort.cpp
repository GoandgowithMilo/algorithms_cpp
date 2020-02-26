#include <iostream>
#include <vector>

// std::vector<int> merge_sort(std::vector<int> arr)
// {
//     // step 1 - break a vector up into two halves and return the first half - Nice!
//     std::vector<int> left_half(arr.begin(), arr.begin() + arr.size()/2);
//     std::vector<int> right_half(arr.begin() + arr.size()/2, arr.begin() + arr.size());
//     return right_half;
// }

void merge_sort(std::vector<int> arr, int l, int r)
{
    
}


int main()
{
    std::vector<int> vec = {125, 68, 23, 56, 400};
    // std::cout << "The unsorted vector contains the following elements: ";
    // for(int i = 0; i < vec.size(); i++)
    // {
    //     std::cout << vec[i] << "  ";
    // }
    // std::cout << std::endl;
    
    merge_sort(vec, 1, 2);

    // std::cout << "After sorting the result is: ";
    // for(int i = 0; i < result.size(); i++)
    // {
    //     std::cout << result[i] << "  ";
    // }
    // std::cout << std::endl;
}