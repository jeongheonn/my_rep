#include <iostream>
#include "vector_utils.h"

void print_vector(const std::vector<int>& vec) {
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int sum_vector(const std::vector<int>& vec) {
    int sum = 0;
    for (int val : vec) {
        sum += val;
    }
    return sum;
}

double average_vector(const std::vector<int>& vec) {
    int sum = sum_vector(vec);
    return static_cast<double>(sum) / vec.size();
}

int max_vector(const std::vector<int>& vec) {
    int max_val = vec[0];
    for (int val : vec) {
        if (val > max_val) {
            max_val = val;
        }
    }
    return max_val;
}




