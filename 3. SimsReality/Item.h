#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item {
private:
    string itemName;
    string itemType;
    string virtualDescription;

public:
    Item(const string& name, const string& type, const string& description);

    string getItemName() const;
    string getItemType() const;
    string getVirtualDescription() const;

protected:
    virtual void interact();
};

#endif 