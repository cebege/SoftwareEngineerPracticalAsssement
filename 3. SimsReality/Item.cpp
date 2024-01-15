#include "Item.h"

Item::Item(const string& name, const string& type, const string& description)
    : itemName(name), itemType(type), virtualDescription(description) {}

void Item::interact() {
    


}

string Item::getItemName() const {
    return itemName;
}

string Item::getItemType() const {
    return itemType;
}

string Item::getVirtualDescription() const {
    return virtualDescription;
}