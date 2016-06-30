#ifndef INVENTORY_H
#define INVENTORY_H

#include<vector>
#include<string>
#include<map>

class Inventory
{
public:
    Inventory();

private:
    vector<string> inventory;
    int inventorySize;
    map<string, string> equipment;//Снаряжение: название части тела -> название предмета
};

#endif // INVENTORY_H
