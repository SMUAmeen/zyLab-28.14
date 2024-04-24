#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout << "MENU" << endl << "a - Add item to cart" << endl << "d - Remove item from cart" << endl << "c - Change item quantity" << endl
   << "i - Output items' descriptions" << endl << "o - Output shopping cart" << endl << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   switch(option){
      case "a":
         string itemName, itemDescription;
         int itemPrice, itemQuantity;
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         getLine(cin, itemName);
         cout << "Enter the item description:" << endl;
         getLine(cin, itemDescription);
         cout << "Enter the item price:" << endl;
         cin >> itemPrice;
         cout << "Enter the item quantity:" << endl;
         cin >> itemQuantity;

         ItemToPurchase newItem;
         newItem.SetName(itemName);
         newItem.SetDescription(itemDescription);
         newItem.SetPrice(itemPrice);
         newItem.SetQuantity(itemQuantity);

         theCart.AddItem(newItem);
      case "d":
         string itemRemove;
         cin.ignore();
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter name of item to remove:" << endl;
         getLine(cin, itemRemove);
         theCart.RemoveItem(itemRemove);
      case "c":
         string itemName;
         string newQuant;
         cin.ignore();
         cout << "CHANGE ITEM QUANTITY" << endl;
         cout << "Enter the item name:" << endl;
         getLine(cin, itemName);
         cout << "Enter the new quantity:" << endl;
         cin >> newQuant;

         ItemToPurchase item;
         item.SetName(itemName);
         item.SetQuantity(newQuant);
         theCart.ModifyItem(item);
         
      case "i":
         cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
         cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl << endl;
         cout << "Item Descriptions" << endl;
         for (int i = 0; i < items.size(); i++){
            cout << items[i].GetName() << ": " << items[i].GetDescription() << endl;
         }
         
      case "o":
         cout << "OUTPUT SHOPPING CART" << endl;
         cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
         cout << "Number of Items: " << theCart.GetNumItemsInCart() << endl;
         auto items = theCart.GetCartItems();
         int totalCost = 0;
         for (int i = 0; i < items.size(); i++){
            totalCost = (items[i].GetPrice * items[i].GetQuantity) + totalCost;
            cout << items[i].GetName() << items[i].GetQuantity << " @ $" << items[i].GetPrice << " = $" << items[i].GetPrice * items[i].GetQuantity << endl;
         }
         cout << "Total: $" << totalCost;
      case "q":
      
   
}

int main() {
   string name, date;
   ShoppingCart cart1;
   string option;

   cout << "Enter customer's name:" << endl;
   getLine(cin, name);
   cout << "Enter today's date:" << endl;
   getLine(cin, date);

   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;

   cart1(name, date);

   PrintMenu();
   cout << "Choose an option:" << endl;
   cin << option;
   ExecuteMenu(option, cart1);
   
      
   
   
   return 0;
}
