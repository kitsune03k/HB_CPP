#include <iostream>

int main(void){
    int n;
    std::cin >> n;

    for(int i=1; i<=9; i++){
        std::cout << n << " * " << i << " = " << n*i << std::endl;
    }
}