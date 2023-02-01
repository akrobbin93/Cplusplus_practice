#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

std::vector<int> primes;

int main(){

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    primes[2] = 13;
    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    std::cout << "------------------------------" << std::endl;

    std::vector<cow> cattle;
    cattle.push_back(cow("Betty", 6, meat));
    cattle.push_back(cow("Libby", 4, hide));
    cattle.push_back(cow("Trudy", 5, pet));
    cattle.push_back(cow("Betsy", 2, dairy));

    std::cout << "The first cow's name is " << cattle.begin()->get_name() << std::endl;
    std::cout << "At index 1, the  cow's name is " << cattle[1].get_name() << std::endl;
    std::cout << "The next to last  cow's name is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "The last cow's name is " << (cattle.end()-1)->get_name() << std::endl;

    return(0);
}
