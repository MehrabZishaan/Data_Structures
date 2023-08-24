#include <iostream>

class DynamicArray {
private:
    int *arr;
    int capacity;
    int size;

public:
    DynamicArray() {
        capacity = 2; // Initial capacity
        size = 0;
        arr = new int[capacity];
    }

    void push_back(int value) {
        if (size == capacity) {
            // If the array is full, double the capacity
            int *newArr = new int[capacity * 2];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
            capacity *= 2;
        }
        arr[size] = value;
        size++;
    }

    int pop_back() {
        if (size == 0) {
            std::cerr << "Array is empty!" << std::endl;
            return -1;
        }
        int value = arr[size - 1];
        size--;
        return value;
    }

    int getSize() const {
        return size;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray dynamicArr;

    dynamicArr.push_back(10);
    dynamicArr.push_back(20);
    dynamicArr.push_back(30);

    std::cout << "Size of dynamicArr: " << dynamicArr.getSize() << std::endl;
    std::cout << "Popped value: " << dynamicArr.pop_back() << std::endl;
    std::cout << "Size of dynamicArr: " << dynamicArr.getSize() << std::endl;

    return 0;
}
