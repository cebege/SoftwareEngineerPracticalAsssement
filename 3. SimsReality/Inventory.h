#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>

using namespace std;

class Inventory {
private:
    vector<Item> inventoryItems;
    int capacity;

public:
    Inventory(int capacity);

    bool addItem(const Item& item);
    bool removeItem(const Item& item);
    int getCapacity() const;
    vector<Item> getInventoryItems() const;
};

#endif 

