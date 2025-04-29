#include <iostream>
#include <vector>
#include <array>

// Used to Traverse over container
// methods begin() - represent start pos, end() - represent end pos + 1
// Also can use to traverse over scatter data

//Uniform traversal - can be  array or vector type
template <typename T>
void print_collection(const T& collection) {
    auto it = collection.begin();
    std::cout << "[";
    while(it != collection.end()) {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << "]" << std::endl;
}

int main(){
    std::vector<int> inst1{11,22,33,44};
    std::vector<int>::iterator it = inst1.begin();
    std::vector<int>::iterator end_it = inst1.end();
    std::array<int, 4> inst2 {55,66,77,88};

    std::cout << std::boolalpha;
    std::cout << "first elt :" << *it << std::endl;
    std::cout << "it = end_it : " << (it == end_it) << std::endl;

    ++it;
    std::cout << "first elt :" << *it << std::endl;
    std::cout << "it = end_it : " << (it == end_it) << std::endl;

    ++it;
    std::cout << "first elt :" << *it << std::endl;
    std::cout << "it = end_it : " << (it == end_it) << std::endl;

    ++it;
    std::cout << "first elt :" << *it << std::endl;
    std::cout << "it = end_it : " << (it == end_it) << std::endl;

    ++it;
    std::cout << "first elt :" << *it << std::endl;
    std::cout << "it = end_it : " << (it == end_it) << std::endl;
    
    print_collection(inst1);
    print_collection(inst2);

    return 0;
}