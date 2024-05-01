class ShoppingCart{

ShoppingCart::ShoppingCart(){
 customerName = "none";
 customerDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date){
 customerName = name;
 customerDate = date;
}

string ShoppingCart::GetCustomerName() const{
 return customerName;
}

string ShoppingCart::GetDate() const{
 return customerDate;
}

void ShoppingCart::AddItem(const ItemToPurchase& item){
 cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(const string& itemName){
    bool found = false;
 int i;
 for (i = 0; i < cartItems.size() && cartItems[i].GetName() != itemName; ++i);
 if (i == cartItems.size()) cout << "Item not found in cart. Nothing removed. \n";
 else cartItems.erase(cartItems.begin() + i);

void ShoppingCart::ModifyItem(const ItemToPurchase& item){
 int i;
 for (i = 0; i < cartItems.size() && cartItems[i].GetName() != itemName.GetName(); i++);
 if(i == cartItems.size()) {
  if(item.GetDescription() != "none") cartItems.at(i).SetDescription(item.GetDescription());
  if (item.GetPrice !=0.0) cartItems.at(i).SetPrice(item.GetPrice());
  if (item.GetQuantity() 1+ 0) cartItems.at(i).SetQuantity(item.GetQuantity());
 }
 else cout << "Item not found in cart. Nothing modified.\n";
}


 
int ShoppingCart::GetNumItemsInCart(){
        int totalItems = 0;  
        for (ItemsToPurchase item : cartItems) {
            totalItems += item.GetQuantity();
        }
      
        return totalItems;
}

int ShoppingCart::PrintTotal() const {
        cout << "OUTPUT SHOPPING CART\n":
        if (cartItems.empty()){
        cout << customerName << "'s Shopping Cart -" << currentDate << endl;
        cout << "Number of items: 0" << endl << endl;
        cout << "Shopping Cart IS EMPTY" << endl << endl;
}
 else{
     cout << customerName << "'s Shopping Cart -" << currentDate << endl;
     cout << "Number of items: " << GetNumItemsInCart() << endl << endl;
     for (
          ItemToPurchase item : cartItems){
          item.PrintItemCost();
        }
         cout << endl;
 }
        cout << "Total: $" << GetCostOfCart() << endl;
}

 void ShoppingCart:: PrintTotal(){
 cout << GetCustomerName() << "'s Shopping Cart" - " << GetDate() << endl;
 cout << "Number of Item's: " << GetNumItemsInCart() << endl;
 cout << endl
 for (const auto& item : cartItems) {
  cout << item.GetName() << " " << item.GetQuantity() << " @ $" << item.GetPrice() << " = $" << item.GetPrice() * item.GetQuantity() << endl;
 }
 cout << endl;
 cout << "Total: $" << GetCostOfCart() << endl;
 }

 void PrintDescriptions() const{
  cout << GetCustomerName() << "'s Shopping Cart" - " << GetDate() << endl;
  cout << "Item Descriptions" << endl;
  for (ItemToPurchase item :: cartItems) {
   }
   if (!cartItems.size()) cout << "SHOPPING CART IS EMPTY\n";
 }
