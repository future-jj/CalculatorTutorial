
#include <iostream>

using namespace std;

struct Sales_data
{
    string boookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    system("chcp 65001");
    /*
    * double i = 1.0;
    double ptr = 3.14;
    double const *p1 = &i;
    //  *p1 = 22.22;
    p1 = &ptr;
    std::cout << *p1 << std::endl;
    std::cout << p1 << std::endl;
    std::cout << &i << std::endl;
    std::cout << i << std::endl;
    */
/*double pi = 3.15;
    double ii = 89.0;
    double* const p1 = &pi;
    *p1 = 19;
    std::cout << pi << std::endl;
    std::cout << *p1 << std::endl;
*/    
   /*
   * const int ci = 0, & cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    decltype(cj) z = 2;
    cout << ci << endl;
    cout << cj << endl;
    cout << y << endl;
    cout << z << endl;
   */ 
    /**
    * int i = 42, * pi = &i, & r = i;
    cout << r + 1 << endl;
    cout << r + 3 << endl;
    cout << r + 5 << endl;
    cout << i << endl;
    decltype(r) z = i;
    */


    return 0;
}
