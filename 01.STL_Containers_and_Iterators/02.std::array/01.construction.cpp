#include <iostream>
#include <vector>
#include <array>

//fixed sized arrays compared to dynamic nature of vector.
//data() method used for direct access of array.
//fill() method to fill entire array with same value.
//front,back, at, data()

template <typename T, size_t Size>
void print_array(const std::array<T,Size>& arr) {
    for (size_t i{}; i < arr.size(); i++) {
        std::cout << arr[i] <<  " ";
    }
    std::cout << std::endl;
}

int main(){
    //Constructing Array
    std::array<int, 3> array1; //will contain junk values.
    std::array<int, 3> array2{1,2}; //will contain 1,2,0
    std::array<int, 3> array3{}; //will contain 0,0,0
    //std::array array{1,2}; //compiler will deduce std::array<int,2>
    //std::array<int, 3> array4{1,2,3,4} //error - cant assign more than that
    //auto array5 = std::experimental::make_array(1,2,3);

    std::cout << "array1 ";
    print_array(array1);
    std::cout << "array2 ";
    print_array(array2);
    std::cout << "array3 ";
    print_array(array3);
    std::cout << "array4 ";
    //print_array(array4);
    //std::cout << "array ";
    //print_array(array, 3);
    return 0;
}