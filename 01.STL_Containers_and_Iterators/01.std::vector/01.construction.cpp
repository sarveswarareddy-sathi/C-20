#include <iostream>
#include <vector>

//std::vector access methods - at(), front(), back()
//std::vector manipulate methods - push_back(), pop_back()
// point to vec with method .data()

template <typename T>
void print_vec(const std::vector<T>& vec) {
    for (size_t i{}; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
}

template <typename T>
void print_raw_vec(const T* p, std::size_t size) {
    for (size_t i{}; i < size; i++) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    //Constructing vectors
    std::vector<int> inst1(20,55);//create and initialize 20 elements with value 55
    std::vector<int> inst2 = {1,2,3,4};//direct initialization
    std::vector<std::string> int3 {"the", "sky", "is", "brown"};
    std::vector<int> inst4 {};//empty
    
    std::cout << "value : " << inst1[1] << std::endl;
    print_vec(inst1);
    std::cout << "nothing : ";
    print_vec(inst4);
    std::cout << "first element : " << inst2.front() << std::endl;
    std::cout << "last element : " << inst2.back() << std::endl;

    print_raw_vec(inst2.data(), 4); // points pointer of vector
    return 0;
}