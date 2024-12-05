#include <iostream>
#include <vector>
#include "vector_utils.h"
#include "math_utils.h"

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    std::cout << "Vector : ";
    print_vector(vec);

    int sum = sum_vector(vec);
    std::cout << "Sum of vector elements: " << sum << std::endl;

    double avg = average_vector(vec);
    std::cout << "Average of vector elements: " << avg << std::endl;

    int max_val = max_vector(vec);
    std::cout << "Max value in vector: " << max_val << std::endl;

    return 0;
}
