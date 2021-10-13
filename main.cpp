#include <iostream>
#include "money.h"
#include <string>

int main() {

    money money_main = money(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);

    const double banknotes_sum = money_main.banknotes_sum();
    std::cout << "banknotes_sum = " << banknotes_sum << "\n";

    money test1 = money(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    test1.sum(money_main);
    std::cout << "sum = " << test1.banknotes_sum() << "\n";

    money test2 = money(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    test2.sub(money_main);
    std::cout << "sub = " << test2.banknotes_sum() << "\n";

    money test3 = money(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    test3.div(money_main);
    std::cout << "div = " << test3.banknotes_sum() << "\n";

    money test4 = money(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    test4.div_num(2);
    std::cout << "div_num = " << test4.banknotes_sum() << "\n";

    money test5 = money(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    test5.multiply_num(2);
    std::cout << "multiply_num = " << test5.banknotes_sum() << "\n";

    money test6 = money(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    const bool are_equal = test6.are_equal(money_main);
    std::cout << "are_equal= " << are_equal << "\n";
};