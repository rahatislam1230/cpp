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
#include <iostream>
using namespace std;
class BankAccount{
private:
    string accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(string accnum,string acchold,double initalbalance){
        accountNumber=accnum;
        accountHolderName=acchold;
        balance=initalbalance;
}
    void deposite(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Amount deposited successfully"<<endl;
        }else{
            cout<<"Invalid deposit amount"<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>0&& amount<=balance){
            balance-=amount;
            cout<<"Amount withdrawn successfully!"<<endl;
        }else if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }else{
            cout<<"invalid amount"<<endl;
        }
    }
    void display(){
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Account holder name:"<<accountHolderName<<endl;
        cout<<"Current balance:"<<balance<<endl;
    }
};
int main(){
    BankAccount account("165884","rahat",100000);
    account.display();
    account.deposite(150);
    account.withdraw(100);
    account.withdraw(100);
    account.display();


}
#include <iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double width;
public:
    void setdimesions(double l,double w){
        if(l>0 && w>0){
            length=l;
            width=w;
        }else{
            cout<<"Invalid dimesions"<<endl;
        }
    }
    double calcuateArea(){
            return length*width;
        }
    double calcuatePerimeter(){
            return 2*(length+width);
        }

    void display(){
        cout<<"length:"<<length<<endl;
        cout<<"Width:"<<width<<endl;
        cout<<"Area: "<< calcuateArea()<<endl;
        cout<<"Perimeter:"<<calcuatePerimeter()<<endl;
    }
};

int main(){
    Rectangle rec;
    double length,width;
    cout<<"Enter the length of Rectangle:";
    cin>>length;
    cout<<"Enter the width Rectangle:";
    cin>>width;
    rec.setdimesions(length,width);
    rec.display();
}
#include<iostream>
using namespace std;
class Student{
private:
    string name;
    int roll;
    float marks[3];
public:
    void studentDisplay(){
    cout<<"Enter name of the student :";
    cin>>name;
    cout<<"Enter roll number of the student :";
    cin>>roll;
    for(int i=0;i<3;++i){
        cin>>marks[i];
    }
}
  void avagandtotal(float &total,float &average){
      total=0;
      for(int i=0;i<3;++i){
        total+=marks[i];
      }
      average=total/3;
  }
  void Display(){
      float total,average;
      avagandtotal(total,average);
      cout<<"roll"<<roll<<endl;
      cout<<"name"<<name<<endl;
      for(int i=0;i<3;++i){
        cout<<"marks "<<marks[i]<<endl;
      }
      cout<<total;
      cout<<average;
  }
};
int main(){
    Student student;
    student.studentDisplay();
    student.Display();
}
#include<iostream>
using namespace std;
struct Complex{
    double real;
    double imaginary;
};
Complex addComplex(Complex &c1,Complex &c2){
    Complex result;
    result.real=c1.real+c2.real;
    result.imaginary=c1.imaginary+c2.imaginary;
    return result;
}
Complex subtractComplex(Complex &c1,Complex &c2){
    Complex result;
    result.real=c1.real-c2.real;
    result.imaginary=c1.imaginary-c2.imaginary;
    return result;
}
void display(Complex &c){
    cout<<c.real;
    if(c.imaginary>=0){
        cout<<"+"<<c.imaginary<<"i"<<endl;
    }else{
        cout<<"-"<<c.imaginary<<"i"<<endl;
    }
}
int main(){
    Complex c1,c2,sum,diff;
    cout<<"Enter the first complex:";
    cin>>c1.real>>c1.imaginary;
    cout<<"Enter the 2nd complex:";
    cin>>c2.real>>c2.imaginary;
    sum=addComplex(c1,c2);
    cout<<"sum:";
    display(sum);
    diff=subtractComplex(c1,c2);
    cout<<"differnce :";
    display(diff);
}
#include<iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    double salary;
};
int main(){
    Employee emplyees[3];
    double totalsalary=0;
    for(int i=0;i<3;++i){
         cout<<"ID:";
         cin>>emplyees[i].id;
         cout<<"name:";
         cin>>emplyees[i].name;
         cout<<"Salary:";
         cin>>emplyees[i].salary;
         totalsalary+=emplyees[i].salary;

    }
    cout<<totalsalary;


}
#include<iostream>
using namespace std;
struct Book{
    string title;
    string author;
    int price;
};
int main(){
    int n;
    cout<<"Enter the number of books:";
    cin>>n;
    Book book[n];
    for(int i=0;i<n;++i){
        cout<<"Title:";
        cin>>book[i].title;
        cout<<"author:";
        cin>>book[i].author;
        cout<<"Price:";
        cin>>book[i].price;
    }
    cout<<"books price above 500";
    bool found=false;
    for(int i=0;i<n;++i){
        if(book[i].price>500){
            cout<<"Title:"<<book[i].title<<endl;
            cout<<"Author:"<<book[i].author<<endl;
            cout<<"Price:"<<book[i].price<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<"no book above 500";
    }
}
#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rolno;
    float marks[3];
};
void detailsOfStudents(Student &item){
    cout<<"Enter the name of student:";
    cin>>item.name;
    cout<<"Enter the roll number of student:";
    cin>>item.rolno;
    for(int i=0;i<3;++i){
        cout<<"Enter the marks of subject ["<<i<<"]: ";
        cin>>item.marks[i];
    }
}
void Display(Student &item,int &total){
    cout<<" Name of student:"<<item.name<<endl;
    cout<<"Roll number of student:"<<item.rolno<<endl;
    total=0;
    for(int i=0;i<3;++i){
        cout<<"Enter the marks of subject ["<<i<<"]: "<<item.marks[i]<<endl;
        total+=item.marks[i];
    }
}
float Calcutor(int total){
    return float(total)/3;
}
void passORFail(Student &item,float average){
    bool passed=true;
    for(int i=0;i<3;++i){
        if(item.marks[i]<40){
            passed=false;
            break;
        }
    }
    if(passed){
        cout<<"passed"<<endl;
    }else{
        cout<<"fail"<<endl;
    }
    cout<<"average:"<<average<<endl;
}
int main(){
    Student s;
    int total;
    float average;
    detailsOfStudents(s);
    Display(s,total);
    average=Calcutor(total);
    passORFail(s,average);
}
#include<iostream>
using namespace std;
struct GroceryItem{
    string name;
    string category;
    int quantity;
    int price;
};
void setItemDetails(GroceryItem &item){
    cout<<"Enter the item name:";
    cin>>item.name;
    cout<<"Enter the category of the item:";
    cin>>item.category;
    cout<<"Enter the quantity of the stock:";
    cin>>item.quantity;
    cout<<"Enter the price of the item:";
    cin>>item.price;
}
void displayItemDetails(GroceryItem &item){
    cout<<"name: "<<item.name<<endl;
    cout<<"category: "<<item.category<<endl;
    cout<<"Quantity: "<<item.quantity<<endl;
    cout<<"Prince per unit: "<<item.price<<endl;
}
void update(GroceryItem &item){
    int change;
    cout<<"enter change in stock quantity:";
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

