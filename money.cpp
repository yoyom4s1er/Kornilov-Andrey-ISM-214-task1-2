#include <cmath>
#include "money.h"
#include <iostream>
#include <string>
#include "math_helper.h"
#include <sstream>

money::money(const double n_001, const double n_005, const double n_01, const double n_05, const double n_1, const double n_2, const double n_5, const double n_10, const double n_50, const double n_100, const double n_500, const double n_1000, const double n_5000)
    : n_001(n_001), n_005(n_005), n_01(n_01), n_05(n_05), n_1(n_1), n_2(n_2), n_5(n_5), n_10(n_10), n_50(n_50), n_100(n_100), n_500(n_500), n_1000(n_1000), n_5000(n_5000) {}

money::money(const money& other)
    : money(other.n_001, other.n_005, other.n_01, other.n_05, other.n_1, other.n_2, other.n_5, other.n_10, other.n_50, other.n_100, other.n_500, other.n_1000, other.n_5000) {}

double money::get_n_001() const {
    return this->n_001;
}

double money::get_n_005() const {
    return this->n_005;
}

double money::get_n_01() const {
    return this->n_01;
}

double money::get_n_05() const {
    return this->n_05;
}

double money::get_n_1() const {
    return this->n_1;
}

double money::get_n_2() const {
    return this->n_2;
}

double money::get_n_5() const {
    return this->n_5;
}

double money::get_n_10() const {
    return this->n_10;
}

double money::get_n_50() const {
    return this->n_50;
}

double money::get_n_100() const {
    return this->n_100;
}

double money::get_n_500() const {
    return this->n_500;
}

double money::get_n_1000() const {
    return this->n_1000;
}

double money::get_n_5000() const {
    return this->n_5000;
}

void money::set_n_001(double n_001) {
    this->n_001 = n_001;
}

void money::set_n_005(double n_005) {
    this->n_005 = n_005;
}

void money::set_n_01(double n_01) {
    this->n_01 = n_01;
}

void money::set_n_05(double n_05) {
    this->n_05 = n_05;
}

void money::set_n_1(double n_1) {
    this->n_1 = n_1;
}

void money::set_n_2(double n_2) {
    this->n_2 = n_2;
}

void money::set_n_5(double n_5) {
    this->n_5 = n_5;
}

void money::set_n_10(double n_10) {
    this->n_10 = n_10;
}

void money::set_n_50(double n_50) {
    this->n_50 = n_50;
}

void money::set_n_100(double n_100) {
    this->n_100 = n_100;
}

void money::set_n_500(double n_500) {
    this->n_500 = n_500;
}

void money::set_n_1000(double n_1000) {
    this->n_1000 = n_1000;
}

void money::set_n_5000(double n_5000){
    this->n_5000 = n_5000;
}

void money::sum(const money& other){
    set_n_001(sum_helper(this->n_001, other.n_001));
    set_n_005(sum_helper(this->n_005, other.n_005));
    set_n_01(sum_helper(this->n_01, other.n_01));
    set_n_05(sum_helper(this->n_05, other.n_05));
    set_n_1(sum_helper(this->n_1, other.n_1));
    set_n_2(sum_helper(this->n_2, other.n_2));
    set_n_5(sum_helper(this->n_5, other.n_5));
    set_n_10(sum_helper(this->n_10, other.n_10));
    set_n_50(sum_helper(this->n_50, other.n_50));
    set_n_100(sum_helper(this->n_100, other.n_100));
    set_n_500(sum_helper(this->n_500, other.n_500));
    set_n_1000(sum_helper(this->n_1000, other.n_1000));
    set_n_5000(sum_helper(this->n_5000, other.n_5000));

}

void money::sub(const money& other) {
    set_n_001(sub_helper(this->n_001, other.n_001));
    set_n_005(sub_helper(this->n_005, other.n_005));
    set_n_01(sub_helper(this->n_01, other.n_01));
    set_n_05(sub_helper(this->n_05, other.n_05));
    set_n_1(sub_helper(this->n_1, other.n_1));
    set_n_2(sub_helper(this->n_2, other.n_2));
    set_n_5(sub_helper(this->n_5, other.n_5));
    set_n_10(sub_helper(this->n_10, other.n_10));
    set_n_50(sub_helper(this->n_50, other.n_50));
    set_n_100(sub_helper(this->n_100, other.n_100));
    set_n_500(sub_helper(this->n_500, other.n_500));
    set_n_1000(sub_helper(this->n_1000, other.n_1000));
    set_n_5000(sub_helper(this->n_5000, other.n_5000));
}

void money::div(const money& other) {
    set_n_001(div_helper(this->n_001, other.n_001));
    set_n_005(div_helper(this->n_005, other.n_005));
    set_n_01(div_helper(this->n_01, other.n_01));
    set_n_05(div_helper(this->n_05, other.n_05));
    set_n_1(div_helper(this->n_1, other.n_1));
    set_n_2(div_helper(this->n_2, other.n_2));
    set_n_5(div_helper(this->n_5, other.n_5));
    set_n_10(div_helper(this->n_10, other.n_10));
    set_n_50(div_helper(this->n_50, other.n_50));
    set_n_100(div_helper(this->n_100, other.n_100));
    set_n_500(div_helper(this->n_500, other.n_500));
    set_n_1000(div_helper(this->n_1000, other.n_1000));
    set_n_5000(div_helper(this->n_5000, other.n_5000));
}

void money::div_num(double num) {

    set_n_001(div_helper(this->n_001, num));
    set_n_005(div_helper(this->n_005, num));
    set_n_01(div_helper(this->n_01, num));
    set_n_05(div_helper(this->n_05, num));
    set_n_1(div_helper(this->n_1, num));
    set_n_2(div_helper(this->n_2, num));
    set_n_5(div_helper(this->n_5, num));
    set_n_10(div_helper(this->n_10, num));
    set_n_50(div_helper(this->n_50, num));
    set_n_100(div_helper(this->n_100, num));
    set_n_500(div_helper(this->n_500, num));
    set_n_1000(div_helper(this->n_1000, num));
    set_n_5000(div_helper(this->n_5000, num));
}

void money::multiply_num(double num) {

    set_n_001(multiply_helper(this->n_001, num));
    set_n_005(multiply_helper(this->n_005, num));
    set_n_01(multiply_helper(this->n_01, num));
    set_n_05(multiply_helper(this->n_05, num));
    set_n_1(multiply_helper(this->n_1, num));
    set_n_2(multiply_helper(this->n_2, num));
    set_n_5(multiply_helper(this->n_5, num));
    set_n_10(multiply_helper(this->n_10, num));
    set_n_50(multiply_helper(this->n_50, num));
    set_n_100(multiply_helper(this->n_100, num));
    set_n_500(multiply_helper(this->n_500, num));
    set_n_1000(multiply_helper(this->n_1000, num));
    set_n_5000(multiply_helper(this->n_5000, num));
}

double money::banknotes_sum() const {

    return n_001 / 100 + n_005 * 5 / 100 + n_01 / 10 + n_05 * 5 / 10 + n_1 + n_2 * 2 + n_5 * 5 + n_10 * 10 + n_50 * 50 + n_100 * 100 + n_500 * 500 + n_1000 * 1000 + n_5000 * 5000;
}

bool money::are_equal(const money& other) const {

    return ::are_equal(this->banknotes_sum(), other.banknotes_sum());
}

std::string money::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_n_001() << ", ";
    buffer << this->get_n_005() << ", ";
    buffer << this->get_n_01() << ", ";
    buffer << this->get_n_05() << ", ";
    buffer << this->get_n_1() << ", ";
    buffer << this->get_n_2() << ", ";
    buffer << this->get_n_5() << ", ";
    buffer << this->get_n_10() << ", ";
    buffer << this->get_n_50() << ", ";
    buffer << this->get_n_100() << ", ";
    buffer << this->get_n_500() << ", ";
    buffer << this->get_n_1000() << ", ";
    buffer << this->get_n_5000() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const money& money)
{
    return out << money.to_string();
}
