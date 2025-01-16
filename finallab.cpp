#include<iostream>
using namespace std;
struct GroceryItem{
    string name;
    string category;
    int quantity;
    int price;
};
void setItemDetails(GroceryItem &item){
    cout<<"Enter the item name";
    cin>>item.name;
    cout<<"Enter the category of the item";
    cin>>item.category;
    cout<<"Enter the quantity of the stock";
    cin>>item.quantity;
    cout<<"Enter the price of the item";
    cin>>item.price;
}
void displayItemDetails(GroceryItem &item){
    cout<<"name"<<item.name<<endl;
    cout<<"category"<<item.category<<endl;
    cout<<"Quantity"<<item.quantity<<endl;
    cout<<"Prince per unit "<<item.price<<endl;
}
void update(GroceryItem &item){
    int change;
    cout<<"enter change in stock quantity";
    cin>>change;
    item.quantity+=change;
    cout<<"stock updated successfully";
}
float calcuateTotalvalue(GroceryItem &item){
    return item.quantity*item.price;
}
int main(){
    GroceryItem item;
    setItemDetails(item);
    displayItemDetails(item);
    update(item);
    displayItemDetails(item);
    float totalValue =calcuateTotalvalue(item);
    cout<<"Total value of stock:"<<totalValue<<endl;

}
#include<iostream>
using namespace std;
struct ElectronicItem{
    string name;
    string category;
    int quantity;
    int price;
};
void setItemDetails(ElectronicItem &item){
    cout<<"Enter the item name:";
    cin>>item.name;
    cout<<"Enter the category of the item:";
    cin>>item.category;
    cout<<"Enter the quantity of the stock:";
    cin>>item.quantity;
    cout<<"Enter the price of the item:";
    cin>>item.price;
}
void displayItemDetails(ElectronicItem &item){
    cout<<"name"<<item.name<<endl;
    cout<<"category"<<item.category<<endl;
    cout<<"Quantity"<<item.quantity<<endl;
    cout<<"Prince per unit "<<item.price<<endl;
}
void update(ElectronicItem &item){
    int change;
    cout<<"enter change in stock quantity";
    cin>>change;
    item.quantity+=change;
    cout<<"stock updated successfully";
}
float calcuateTotalvalue(ElectronicItem &item){
    return item.quantity*item.price;
}
int main(){
    ElectronicItem item;
    setItemDetails(item);
    displayItemDetails(item);
    update(item);
    displayItemDetails(item);
    float totalValue =calcuateTotalvalue(item);
    cout<<"Total value of stock:"<<totalValue<<endl;

}

#include <iostream>
using namespace std;
class Book{
public:
    string title;
    string name;
    int number;
    int price;
};
    void bookDetails(Book &item){
    cout<<"Enter the book title: ";
    cin>>item.title;
    cout<<"Enter the name of the author: ";
    cin>>item.name;
    cout<<"Enter the number of the copies:";
    cin>>item.number;
    cout<<"Enter the price of copy:";
    cin>>item.price;
}
    void details(const Book &item){
    cout<<"book title:"<<item.title<<endl;
    cout<<"Author name:"<<item.name<<endl;
    cout<<"number of copies:"<<item.number<<endl;
    cout<<"price of copy:"<<item.price<<endl;
}
    float calcuate(const Book &item){
    return item.number*item.price;
}
    void change(Book &item){
    int change;
    cout<<"Enter the change in stock :"<<endl;
    cin>>change;
    item.number+=change;
    cout<<"Stock update successfully"<<endl;
}

int main(){
    Book item;
    bookDetails(item);
    details(item);
    change(item);
    details(item);
    float totalvalue=calcuate(item);
    cout<<"Total value of stock:"<<totalvalue<<endl;

}
