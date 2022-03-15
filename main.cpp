#include <iostream>
#include "adder.h"

int main(){
    std::cout << "Using function from linked library: " << add(5, 10) << std::endl;
    return 0;
}