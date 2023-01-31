#include <iostream>
#include <string>

int arr[5] = {1, 23, 32, 24, 337};
int sum;
float avg;

int main()
{
    sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    avg = sum / 5.0f;

    std::cout << "Average: " << avg << std::endl; 

    return(0);
}
