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
#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rolno;
    float marks[3];
};
void detailsOfStdeunt(Student &item){
    cout<<"Enter the number of the student:";
    cin>>item.name;
    cout<<"Enter the roll number of the student: ";
    cin>>item.rolno;
    for(int i=0;i<3;++i){
        cout<<"Enter the marks of subject ["<<i<<"]:";
        cin>>item.marks[i];
    }
}

void Display(Student &item, int &total){
    cout<<"Name of the student is: "<<item.name<<endl;
    cout<<"student's name is: "<<item.rolno<<endl;
    total=0;
    for(int i=0;i<3;++i){
        cout<<"the marks of ["<<i<<"] : "<<item.marks[i]<<endl;
        total=item.marks[i];
    }
}

float Calcutor(int total){
    return float(total)/3;

}
void FailorPass(Student &item,float average){
    bool passed=true;
    for (int i=0;i<3;++i){
        if(item.marks[i]<40){
            passed =false;
            break;
        }
    }
    if(passed){
        cout<<"passed"<<endl;
    }else{
        cout<<"fail"<<endl;
    }
    cout<<"average marks:"<<average<<endl;

}
int main(){
    Student s;
    int total;
    float average;
    detailsOfStdeunt(s);
    Display(s,total);
    average=Calcutor(total);
    FailorPass(s,average);
}
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

#include<iostream>
using namespace std;
struct Movie{
    string name;
    string time;
    int price;
    int tickets;
};
void movieDetails(Movie &item){
    cout<<"Enter the name of the movie:";
    cin>>item.name;
    cout<<"Enter the time of the movie:";
    cin>>item.time;
    cout<<"Enter the price of ticket:";
    cin>>item.price;
    cout<<"Enter the number of ticket of available: ";
    cin>>item.tickets;
}
void details(Movie &item){
    cout<<"the name of the movie:"<<item.name<<endl;
    cout<<"the time of the movie:"<<item.time<<endl;
    cout<<"the price of ticket:"<<item.price<<endl;
    cout<<"Enter the number of ticket of available: "<<item.tickets<<endl;
}
void Available(Movie &item){
    int avgtickets;
    cout<<"Enter the available ticket:"<<endl;
    cin>>avgtickets;
    if(avgtickets>item.tickets){
        cout<<"Not enough tickets!"<<endl;
    }else if(item.tickets-=avgtickets){
        cout<<"booking successfully. Remaining tickets"<<endl;
    }else{
        cout<<"sold out!"<<endl;
    }
}
int main(){
    Movie item;
    movieDetails(item);
    details(item);
    Available(item);
}
