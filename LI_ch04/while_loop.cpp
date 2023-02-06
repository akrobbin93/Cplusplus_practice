#include <iostream>
#include <vector>

std::vector<int> numbers = {12, 25, 31, 47, 58};


int main(){
    auto ptr = numbers.begin();

    while(ptr != numbers.end()){
        std::cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    std::cout << std::endl;

    int i = 0;
    do{
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    std::cout << std::endl;

    return(0);
}
