
#include <iostream>


int main() {
    system("chcp 65001");
    double i = 1.0;
    double ptr = 3.14;
    double const *p1 = &i;
    //  *p1 = 22.22;
    p1 = &ptr;
    std::cout << *p1 << std::endl;
    std::cout << p1 << std::endl;
    std::cout << &i << std::endl;
    std::cout << i << std::endl;
    return 0;
}
