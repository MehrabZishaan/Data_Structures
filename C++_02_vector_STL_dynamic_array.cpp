/// In C++, a vector is a dynamic array implementation provided by the Standard Template Library (STL).
/// It automatically manages memory and allows you to add, remove, and access elements with dynamic resizing.
/// Vectors are similar to arrays but provide additional features like dynamic sizing and bounds checking.

#include <iostream>
#include <vector>

int main() {
    // Create an empty vector of integers
    std::vector<int> myVector;

    // Add elements to the vector using push_back
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Access elements using index
    std::cout << "Element at index 0: " << myVector[0] << std::endl;

    // Modify elements using index
    myVector[1] = 25;

    // Get the size of the vector
    std::cout << "Size of myVector: " << myVector.size() << std::endl;

    // Iterate through the vector using a loop
    std::cout << "Vector elements: ";
    for (int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    // Remove an element from the end
    myVector.pop_back();

    // Check if the vector is empty
    if (myVector.empty()) {
        std::cout << "myVector is empty." << std::endl;
    } else {
        std::cout << "myVector is not empty." << std::endl;
    }

    return 0;
}

