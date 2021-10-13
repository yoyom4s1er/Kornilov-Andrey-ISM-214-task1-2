#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс позволяющий работать с денежными суммами
 */

class money {

private:

    /**
     * @brief номинал 1 копейки
     */

    double n_001;

    /**
     * @brief номинал 5 копеек
     */

    double n_005;

    /**
     * @brief номинал 10 копеек
     */

    double n_01;

    /**
     * @brief номинал 50 копеек
     */

    double n_05;

    /**
     * @brief номинал 1 рубля
     */

    double n_1;

    /**
     * @brief номинал 2 рублей
     */

    double n_2;

    /**
     * @brief номинал 5 рублей
     */

    double n_5;

    /**
     * @brief номинал 10 рублей
     */

    double n_10;

    /**
     * @brief номинал 50 рублей
     */

    double n_50;

    /**
     * @brief номинал 100 рублей
     */

    double n_100;

    /**
     * @brief номинал 500 рублей
     */

    double n_500;

    /**
     * @brief номинал 1000 рублей
     */

    double n_1000;

    /**
     * @brief номинал 5000 рублей
     */

    double n_5000;

public:

    /**
     * @brief Параметризированный конструктор
     * @param n_001 номинал 1 копейки
     * @param n_005 номинал 5 копеек
     * @param n_01 номинал 10 копеек
     * @param n_05 номинал 50 копеек
     * @param n_1 номинал 1 рубля
     * @param n_2 номинал 2 рублей
     * @param n_5 номинал 5 рублей
     * @param n_10 номинал 10 рублей
     * @param n_50 номинал 50 рублей
     * @param n_100 номинал 100 рублей
     * @param n_500 номинал 500 рублей
     * @param n_1000 номинал 1000 рублей
     * @param n_5000 номинал 5000 рублей
     */

    money(const double n_001, const double n_005, const double n_01, const double n_05, const double n_1, const double n_2, const double n_5, const double n_10, const double n_50, const double n_100, const double n_500, const double n_1000, const double n_5000);

    /**
     * @brief Конструктор копирования
     */

    money(const money& other);

    /**
     * @brief Деструктор
     */

    ~money() = default;

    /**
     * @brief Возвращает значение по номиналу 0.01
     * @return n_001
     */

    double get_n_001() const;

    /**
     * @brief Возвращает значение по номиналу 0.05
     * @return n_005
     */

    double get_n_005() const;

    /**
     * @brief Возвращает значение по номиналу 0.1
     * @return n_01
     */

    double get_n_01() const;

    /**
     * @brief Возвращает значение по номиналу 0.5
     * @return n_05
     */

    double get_n_05() const;

    /**
     * @brief Возвращает значение по номиналу 1
     * @return n_1
     */

    double get_n_1() const;

    /**
     * @brief Возвращает значение по номиналу 5
     * @return n_2
     */

    double get_n_2() const;

    /**
     * @brief Возвращает значение по номиналу 5
     * @return n_5
     */

    double get_n_5() const;

    /**
     * @brief Возвращает значение по номиналу 10
     * @return n_10
     */

    double get_n_10() const;

    /**
     * @brief Возвращает значение по номиналу 50
     * @return n_50
     */

    double get_n_50() const;

    /**
     * @brief Возвращает значение по номиналу 100
     * @return n_100
     */

    double get_n_100() const;

    /**
     * @brief Возвращает значение по номиналу 500
     * @return n_500
     */

    double get_n_500() const;

    /**
     * @brief Возвращает значение по номиналу 1000
     * @return n_1000
     */

    double get_n_1000() const;

    /**
     * @brief Возвращает значение по номиналу 5000
     * @return n_5000
     */

    double get_n_5000() const;

    /**
     * @brief Устанавливает новое значение по номиналу 0.01
     * @param n_001
     */

    void set_n_001(double n_001);

    /**
     * @brief Возвращает значение по номиналу 0.05
     * @param n_005
     */

    void set_n_005(double n_005);

    /**
     * @brief Устанавливает новое значение по номиналу 0.1
     * @param n_01
     */

    void set_n_01(double n_01);

    /**
     * @brief Устанавливает новое значение по номиналу 0.5
     * @param n_05
     */

    void set_n_05(double n_05);

    /**
     * @brief Устанавливает новое значение по номиналу 1
     * @param n_1
     */

    void set_n_1(double n_1);

    /**
     * @brief Устанавливает новое значение по номиналу 5
     * @param n_2
     */

    void set_n_2(double n_2);

    /**
     * @brief Устанавливает новое значение по номиналу 5
     * @param n_5
     */

    void set_n_5(double n_5);

    /**
     * @brief Устанавливает новое значение по номиналу 10
     * @param n_10
     */

    void set_n_10(double n_10);

    /**
     * @brief Устанавливает новое значение по номиналу 50
     * @param n_50
     */

    void set_n_50(double n_50);

    /**
     * @brief Устанавливает новое значение по номиналу 100
     * @param n_100
     */

    void set_n_100(double n_100);

    /**
     * @brief Устанавливает новое значение по номиналу 500
     * @param n_500
     */

    void set_n_500(double n_500);

    /**
     * @brief Устанавливает новое значение по номиналу 1000
     * @param n_1000
     */

    void set_n_1000(double n_1000);

    /**
     * @brief Устанавливает новое значение по номиналу 5000
     * @param n_5000
     */

    void set_n_5000(double n_5000);



    /**
     * @brief Складывание всех номиналов суммы
     * @return сумму по всем номиналам
     */

    double banknotes_sum() const;

    /**
     * @brief сложение сумм
     * @return
     */

    void sum(const money& other);

    /**
     * @brief вычитание сумм
     * @return
     */

    void sub(const money& other);

    /**
     * @brief деление сумм
     * @return
     */

    void div(const money& other);

    /**
     * @brief деление суммы на дробное число
     * @return
     */

    void div_num(double num);

    /**
     * @brief умножение суммы на дробное число
     * @return
     */

    void multiply_num(double num);

    /**
     * @brief сравнение сумм
     * @return yes или no
     */

    bool are_equal(const money& other) const;

    std::string to_string() const;

    friend std::ostream &operator << (std::ostream &out, const money& money);
};
