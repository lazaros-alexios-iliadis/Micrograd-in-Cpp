# include <iostream>
# include "Value.h"

int main(){
Value myValue1(2.0);
Value myValue2(5.1);
std::cout << myValue1 << std::endl;
std::cout << myValue1 + myValue2 << std::endl;
std::cout << myValue1 * myValue2 << std::endl;
return 0;
}