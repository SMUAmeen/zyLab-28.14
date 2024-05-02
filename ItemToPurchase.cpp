#include <iosstream>
#include <string>

using namespace std;

ItemToPurchase:ItemToPurchase(string n, string d, double p, int q){
  name = n;
  itemDescription = d;
  price = p;
  quantity = q;
}

void ItemToPurchase::SetName(string n){
    name = n;
}

void ItemToPurchase::SetDescription(string d){
    itemDescription = d;
}

void ItemToPurchase::SetPrice(double p){
    price = p;
}

void ItemToPurchase::SetQuantity(int q){
    quantity = q;
}

void ItemToPurchase::GetName() const{
  return name;
}

void ItemToPurchase::GetDescription() const{
  return itemDescription;
}

void ItemToPurchase::GetPrice() const{
  return price;
}

void ItemToPurchase::GetQuantity() const{
  return quantity;
}

void ItemToPurchase::PrintItemCost() const{
  cout << name << ' ' << quantity << " @ $" << price << " = @" << quantity*price << endl;
}

void ItemToPurchase::PrintItemDescroption) const{
   cout << name << ": " << itemDescription << endl;
}
