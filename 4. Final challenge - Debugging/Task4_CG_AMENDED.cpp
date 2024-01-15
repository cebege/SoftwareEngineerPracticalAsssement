#include <string>
#include<iostream>
#include <utility>
#include <vector> // Included by CG

// Benefits of using a vector instead of a C-style array:
// 
// Dynamic Sizing: Unlike C-style arrays, vectors can dynamically resize. 
//                    This means you don't have to worry about the size limit of your inventory, as it can grow as needed.
// Memory Management: Vectors handle their memory allocation and deallocation internally, 
//                    reducing the risk of memory leaks and simplifying the code.
// Convenient Functions: Vectors provide useful functions like push_back(), pop_back(), size(), etc., 
//                    which make it easier to manage the inventory items.
// Safety accessing data: Using vectors can be safer as they provide bounds checking with functions like at(), 
//                    reducing the risk of accessing invalid memory.


using namespace std; // more readible code for me, maybe a personal preference!

class Item {
private:
    string name;
    int quantity;
    float price;

public:
    Item(
        string name,
        int quantity,
        float price
    ) :
        name{ move(name) },
        quantity{ quantity },
        price{ price } {
    }

    string get_name() const {
        return name;
    }

    int get_quantity() const {
        return quantity;
    }

    void set_quantity(int new_quantity) {
        quantity = new_quantity;
    }

    float get_price() const {
        return price;
    }

    bool is_match(const string& other) {
        return name == other;
    }

    // additional function to display total price amended by CG

    float get_total_price() const {
        return quantity * price;
    }
};

class Inventory {
private:
    vector<Item> items;
    float total_money;

    static void display_data(const Item& item) {
        cout << "\nItem name: " << item.get_name();
        cout << "\nQuantity: " << item.get_quantity();
        cout << "\nPrice: " << item.get_price();
        cout << "\nTotal price: " << item.get_total_price(); // Display total price
    }

public:
    Inventory() : total_money{ 0 } {}

    void add_item() {
        string name;
        int quantity;
        float price;

        cin.ignore();
        cout << "\nEnter item name: ";
        getline(cin, name);
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price: ";
        cin >> price;

        items.emplace_back(name, quantity, price);
    }

    void sell_item() {
        string item_to_check;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter item name: ";
        getline(cin, item_to_check);

        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->is_match(item_to_check)) {
                remove_item(it);
                return;
            }
        }
        cout << "\nThis item is not in your Inventory";
    }

    void remove_item(vector<Item>::iterator item_it) {

        int input_quantity;
        cout << "\nEnter number of items to sell: ";
        cin >> input_quantity;

        int quantity = item_it->get_quantity();
        if (input_quantity <= quantity) {
            float price = item_it->get_price();
            float money_earned = price * input_quantity;
            item_it->set_quantity(quantity - input_quantity);
            cout << "\nItems sold";
            cout << "\nMoney received: " << money_earned;
            total_money += money_earned;

            if (item_it->get_quantity() == 0) {
                items.erase(item_it);
                cout << "\nItem completely sold out and removed from inventory.";
            }
        }
        else {
            cout << "\nCannot sell more items than you have.";
        }
    }



    // AMENDED PREVIOUS IMPLEMENTATION:

    //void remove_item(int item_index) {
    //    int input_quantity;
    //    Item* item = items[item_index];
    //    std::cout << "\nEnter number of items to sell: ";
    //    std::cin >> input_quantity;

    //    int quantity = item->get_quantity();
    //    if (input_quantity <= quantity) {
    //        float price = item->get_price();
    //        float money_earned = price * input_quantity;
    //        int new_quantity = quantity - input_quantity;
    //        item->set_quantity(new_quantity);
    //        std::cout << "\nItems sold";
    //        std::cout << "\nMoney received: " << money_earned;
    //        total_money += money_earned;

    //        if (new_quantity == 0) {
    //            delete items[item_index]; // Deallocate memory
    //            for (int i = item_index; i < item_count - 1; i++) {
    //                items[i] = items[i + 1]; // Shift items down in the array
    //            }
    //            items[item_count - 1] = nullptr; // Set the last item to nullptr
    //            item_count--; // Decrease the item count
    //            std::cout << "\nItem completely sold out and removed from inventory.";
    //        }
    //    }
    //    else {
    //        std::cout << "\nCannot sell more items than you have.";
    //    }
    //}

    void list_items() {
        if (items.empty()) {
            cout << "\nInventory empty.";
            return;
        }

        float total = 0.0;
        cout << "\nInventory List:\n"; // Possible format changes to display like a receipt for review.
        cout << "--------------------------------\n";

        for (const auto& item : items) {
            display_data(item);
            total += item.get_total_price(); // Total price displayed for all items
            cout << "\n--------------------------------\n";
        }

        cout << "Total Inventory Value: " << total << "\n";
        cout << "Have a nice day!" << "\n";
    }
};

// no need to modify anything here
int main() {
    int choice;
    Inventory inventory_system;
    std::cout << "Welcome to the inventory!";

    while (1) {
        std::cout << "\n\nMENU\n"
            << "1. Add new item\n"
            << "2. Sell item\n"
            << "3. List items\n"
            << "4. Exit\n\n"
            << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            inventory_system.add_item();
            break;

        case 2:
            inventory_system.sell_item();
            break;

        case 3:
            inventory_system.list_items();
            break;

        case 4:
            exit(0);

        default:
            cout << "\nInvalid choice entered";
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            break;
        }
    }
}
