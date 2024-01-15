#include "Inventory.h"
#include "Item.h"

Inventory::Inventory(int cap) : capacity(cap) {}

bool Inventory::addItem(const Item& item) {
    if (inventoryItems.size() < capacity) {
        inventoryItems.push_back(item);
        return true;
    }
    return false;
}

bool Inventory::removeItem(const Item& item) {
    for (auto it = inventoryItems.begin(); it != inventoryItems.end(); ++it) {
        if (it->getItemName() == item.getItemName()) {
            inventoryItems.erase(it);
            return true;
        }
    }
    return false;
}

int Inventory::getCapacity() const {
    return capacity;
}

vector<Item> Inventory::getInventoryItems() const {
    return inventoryItems;
}