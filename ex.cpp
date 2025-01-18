#include <iostream>
using namespace std;
class Car{
public:
    string name;
    string facturer;
    int number;
    int price;
};
void CarDetails(Car &item) {
    cout << "Enter the model of the Car: ";
    cin >> item.name;
    cout << "Enter the manufacturer: ";
    cin >> item.facturer;
    cout << "Enter the number of cars in stock: ";
    cin >> item.number;
    cout << "Enter the price of the car: ";
    cin >> item.price;
}
void display(Car &item){
    cout<<"the model name:"<<item.name<<endl;
    cout<<"the manufacturer:"<<item.facturer<<endl;
    cout<<"Car in stock:"<<item.number<<endl;
    cout<<"car price"<<item.price<<endl;
}
void update(Car &item){
    int change;
    cout<<"Enter the sold cars:"<<endl;
    cin>>change;
    if(item.number + change<0){
        cout<<"Error : not enough stock to complete the sale!"<<endl;
    }else{
        item.number+=change;
        cout<<"stock updated successfully.New stock:"<<item.number<<endl;
    }}
float calcute(Car &item){
        return item.number*item.price;
}

int main(){
    Car s;
    CarDetails(s);
    display(s);
    update(s);
    float totalvalue=calcute(s);
    cout<<"Total stock is:"<<totalvalue<<endl;

}
