#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Item {
    public:
        string name;
        int code;

        Item(string x = " ", int y = 0) {
            this -> name = x;
            this -> code = y;
        }
};

int main() {
    cin >> product_name >> product_code;

    Item item1 = Item("codetree", 50);
    Item item2 = Item(product_name, product_code);

    cout << "product " << item1.code << " is " << item1.name << '\n';
    cout << "product " << item2.code << " is " << item2.name;

    return 0;
}