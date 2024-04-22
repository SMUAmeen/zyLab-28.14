#include <iosstream>
#include <string>

using namespace std;

class ItemToPurchase{
private:
  string itemName;
  string itemPrice;
  int itemQuantity;

public: 

ItemToPurchase(string name = "none", string description = "none", int price = 0, int quantity = 0)[
  itemName = name;
  itemDescription = description;
  itemPrice = price;
  itemQuantity = quantity; 
}

void SetDescription(string description){
  itemDescription = description; 
}

void PrintItemCost() const {
  cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " =$" << (itemQuantity * itemPrice) << endl;
  }
};

