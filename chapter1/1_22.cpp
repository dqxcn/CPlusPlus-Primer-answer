#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item item, sum;
    std::cin >> sum;
    while(std::cin >> item){
        sum += item;
    }
    std::cout << sum << std::endl;
    return 0;
}