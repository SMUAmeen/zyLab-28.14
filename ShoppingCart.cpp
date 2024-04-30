class ShoppingCart{
ShoppingCart::ShoppingCart(){
 customerName = "none";
 customerDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date){
 customerName = name;
 customerDate = date;
}
string GetCustomerName(){
 return customerName;
}
string GetDate(){
 return customerDate;
}
void AddItem(ItemToPurchase item){
 cartItems.push_back(item);
}
void RemoveItem(string name){
   for (const auto& obj : cartItems) {
        if(obj.GetName() == name){
         cartItems.remove(obj);
        }
    else{
     cout << "Item not found in cart. Nothing removed." << endl;
   }
   }
}
void ModifyItem(ItemToPurchase item){
 for (const auto& obj : cartItems) {
  if((obj.GetName() == item.GetName()) && (item.GetDescription() != "none") && (item.GetPrice() != 0 && item.GetQuantity() != 0)){
   obj = item;
  }
  else{
   cout << "Item not found in cart. Nothing removed." << endl;
  }
 }
}
int GetNumItemsInCart(){
        int numItems = 0;  
        for (const auto& item : cartItems) {
            numItems++;
        }
      
        return numItems;
}
int GetCostOfCart() {
        int totalCost = 0;
        
        for (const auto& item : cartItems) {
            totalCost += item.GetPrice() * item.GetQuantity();
        }
        
        return totalCost;
}
};
