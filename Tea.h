#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Tea : public Drink
{
private:
    const static int MILK_TEA = 20000, KUMQUAT_TEA = 12000, PEACH_TEA = 20000, GINGER_TEA = 20000, LEMON_TEA = 20000, LIPTON_TEA = 20000;

public:
    Tea();
    ~Tea();
    void milkTea(int numberOf);
    void kumquatTea(int numberOf);
    void addDrink(int choose, int numberOf);
    void output();
};

Tea::Tea() {}

Tea::~Tea() {}

void Tea::milkTea(int numberOf)
{
    name = "Tra Sua";
    quantity = numberOf;
    unitPrice = MILK_TEA;
    amount = unitPrice * quantity;
}

void Tea::kumquatTea(int numberOf)
{
    name = "Tra Tac";
    quantity = numberOf;
    unitPrice = KUMQUAT_TEA;
    amount = unitPrice * quantity;
}

void Tea::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        milkTea(numberOf);
        break;
    case 2:
        kumquatTea(numberOf);
        break;
    }
}

void Tea::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}
