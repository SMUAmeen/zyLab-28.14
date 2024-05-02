//https://github.com/SMUAmeen/zyLab-28.14/tree/main
//Daniyal Saleem
//Ameen Zia
//Truman Barden
#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    string temp;
    double prices;
    int temp2;
    switch(option){
      case "a": {
         cout << "ADD ITEM TO CART" << endl;
         ItemToPurchase newItem;
         cin.ignore();
         cout << "Enter the item name:" << endl;
         getLine(cin, temp);
         newItem.SetName(temp);
         cout << "Enter the item description:" << endl;
         getLine(cin, temp);
         newItem.SetDescription(temp);
         cout << "Enter the item price:" << endl;
         cin >> prices;
         newItem.SetPrice(prices);
         cout << "Enter the item quantity:" << endl;
         cin >> temp2;

         newItem.SetQuantity(temp2);
        theCart.AddItem(newItem);
        break;
      }
      case "d":{
         cout << "REMOVE ITEM FROM CART" << endl;
         string itemName;
         cin.ignore();
         cout << "Enter name of item to remove:" << endl;
         getLine(cin, itemName);
         theCart.RemoveItem(itemName);
         break;
      }
      case "c":{
         cout << "CHANGE ITEM QUANTITY" << endl;
          string itemName;
         string newQuantity;
         cin.ignore();
         cout << "Enter the item name:" << endl;
         getLine(cin, itemName);
         cout << "Enter the new quantity:" << endl;
         cin >> newQuantity;

         ItemToPurchase items(itemName, "none", 0.0, newQuantity);
        theCart.ModifyItem(items);
        break;
      }
         
      case "i":
         cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
         theCart.PrintDescriptions();
         break;
      case "o":
         theCart.PrintTotal();
        break;
      case "q":
        //cout << "Exiting program..." << endl;
        break;
    }
}

int main() {
   string customerName, todayDate;
   cout << "Enter customer's name:" << endl;
   getLine(cin, customerName);
   cout << "Enter today's date:" << endl;
   getLine(cin, todayDate);

   cout << endl << "Customer name: " << customerName << endl;
   cout << "Today's date: " << todayDate << endl;

   ShoppingCart theCart(customerName, todayDate);

   char choices = 0;
   while (choices != 'q'){
       if(choices == 0 || choices == 'a' || choices == 'd' || choices == 'c'
           || choices == 'i' || choices == 'o' || choices == 'q'){
               cout << endl;
               PrintMenu();
               cout << endl;
       }
       cout << "Choose an option:" << endl;
       cin >> choices;
       ExecuteMenu(choices, theCart);
   }
   
   return 0;
}
