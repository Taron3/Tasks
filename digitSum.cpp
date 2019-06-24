
#include <iostream>

int digitSum(int number)
{
    int sum = 0;
    int tempNumber = number;
    while(tempNumber)
    {
        sum += tempNumber % 10;          
        tempNumber /= 10;
    } 
    
    while(sum > 9)
    {
        return digitSum(sum);    
    }
    
    return number; 
}

int main()
{
    int in;
    std::cin >> in;
    std::cout << digitSum(in) << std::endl;
}
