#include <iostream>
using namespace std;

class ticket {
public:
    int ticketid;
    string studentName;
    string destination;
    float fare;

    ticket(int id=0, string name=" ", string dest=" ", float f=0.0){
        ticketid = id;
        studentName = name;
        destination = dest;
        fare = f;
    }

    void display() {
        cout << "ID: " << ticketid
             << ", Name: " << studentName
             << ", Destination: " << destination
             << ", Fare: " << fare << endl;
    }
};

class ArrayTicket {
    public:
    ticket arr[100];
    int n;

    ArrayTicket() { n = 0; }

    void insertTicket(ticket t) {
        arr[n++] = t;
    }

    void bubbleSort() {
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j].fare > arr[j+1].fare){
                    ticket temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    void selectionSort() {
        for(int i=0;i<n-1;i++){
            int mini = i;
            for(int j=i+1;j<n;j++){
                if(arr[j].fare < arr[mini].fare){
                    mini = j;
                }
            }
            if(mini != i){
                ticket temp = arr[i];
                arr[i] = arr[mini];
                arr[mini] = temp;
            }
        }
    }

    void displayTickets() {
        for(int i=0;i<n;i++) arr[i].display();
    }

    int linearSearchByID(int id) {
        for(int i=0;i<n;i++){
            if(arr[i].ticketid == id) return i;
        }
        return -1;
    }

    int binarySearchByFare(float f) {
        int low = 0, high = n-1;
        while(low <= high) {
            int mid = (low + high)/2;
            if(arr[mid].fare == f) return mid;
            else if(arr[mid].fare < f) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

class Node {
public:
    ticket data;
    Node* next;
    Node(ticket t) { data = t; next = nullptr; }
};

class LinkedListTicketManager {
private:
    Node* head;
public:
    LinkedListTicketManager() { head = nullptr; }

    void insertAtStart(ticket t) {
        Node* newNode = new Node(t);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(ticket t) {
        Node* newNode = new Node(t);
        if(head == nullptr) { head = newNode; return; }
        Node* temp = head;
        while(temp->next != nullptr) temp = temp->next;
        temp->next = newNode;
    }

    void insertAtMiddle(ticket t, int pos) {
        if(pos == 0) { insertAtStart(t); return; }
        Node* newNode = new Node(t);
        Node* temp = head;
        for(int i=0;i<pos-1 && temp!=nullptr;i++) temp=temp->next;
        if(temp == nullptr) return;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while(temp != nullptr) {
            temp->data.display();
            temp = temp->next;
        }
    }
};


int main() {
    ArrayTicket arrMgr;
    LinkedListTicketManager llMgr;

    ticket t1(101, "Alice", "Campus", 30.5);
    ticket t2(102, "Bob", "Hostel", 25.0);
    ticket t3(103, "Charlie", "Library", 40.0);

 
    arrMgr.insertTicket(t1);
    arrMgr.insertTicket(t2);
    arrMgr.insertTicket(t3);
    arrMgr.bubbleSort();
    arrMgr.displayTickets();

 
    llMgr.insertAtStart(t1);
    llMgr.insertAtEnd(t2);
    llMgr.insertAtMiddle(t3, 1);
    llMgr.display();

    return 0;
}
#include<iostream>
using namespace std;

class Ticket{
public:
    int ticketID;
    string studentname;
    string destination;
    float fare;

    Ticket(){}  // default constructor

    Ticket(int id, string name, string place, float f){
        ticketID=id;
        studentname=name;
        destination=place;
        fare=f;
    }

    void display(){
        cout<<ticketID<<" "<<studentname<<" "<<destination<<" "<<fare<<endl;
    }
};

class ArrayTick{
public:
    Ticket arr[100];
    int n;

    void bouble(){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j].fare<arr[j+1].fare){
                    Ticket temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    void selection(){
        for(int i=0;i<n-1;i++){
            int mini=i;
            for(int j=i+1;j<n;j++){
                if(arr[j].fare<arr[mini].fare){
                    mini=j;
                }
            }
            Ticket temp=arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
        }
    }

    void linear(int key){
        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i].ticketID==key){
                flag=true;
                cout<<"found"<<endl;
                break;
            }
        }
        if(!flag){
            cout<<"not found"<<endl;
        }
    }

    void binary(float key){
        bool flag=false;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid].fare==key){
                cout<<"found"<<endl;
                flag=true;
                break;
            }else if(arr[mid].fare<key){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(!flag){
            cout<<"not found"<<endl;
        }
    }
};

class Node{
public:
    Ticket data;
    Node*next;
    Node(Ticket t){
        data=t;
        next=NULL;
    }
};

class LinkedList{
public:
    Node*head=NULL;

    void insertS(Ticket t){
        Node*newNode=new Node(t);
        newNode->next=head;
        head=newNode;
    }

    void insertE(Ticket t){
        Node* newNode=new Node(t);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void insertM(Ticket t,int pos){
        if(pos==0){
            insertS(t);
            return;
        }
        Node* newNode=new Node(t);
        Node* temp=head;
        for(int i=0;i<pos-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL) return;
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void display(){
        Node * temp=head;
        while(temp!=NULL){
            temp->data.display();
            temp=temp->next;
        }
    }
};

int main(){
    ArrayTick a;
    a.n=2;
    LinkedList l;

    for(int i=0;i<a.n;i++){
        int id;
        string name,dest;
        float fare;
        cin>>id>>name>>dest>>fare;
        Ticket t(id,name,dest,fare);
        l.insertE(t);
        a.arr[i]=t;
    }

    a.selection();

    for(int i=0;i<a.n;i++){
        a.arr[i].display();
    }

    a.binary(5);

    return 0;
}
#include<iostream>
using namespace std;

class Ticket{
public:
    int ticketID;
    string studentname;
    string destination;
    float fare;
    Ticket(int id, string name, string place, float f){
        ticketID=id;
        studentname=name;
        destination=place;
        fare=f;
    }

    void display(){
        cout<<ticketID<<" "<<studentname<<" "<<destination<<" "<<fare<<endl;
    }
};

class Node{
public:
    Ticket* data;
    Node* next;
    Node(Ticket* t){
        data=t;
        next=NULL;
    }
};

class Single{
public:
    Node* head;
    Single(){ head=NULL; }

    void insertA(Ticket* t){
        Node* newNode=new Node(t);
        newNode->next=head;
        head=newNode;
    }

    void insertE(Ticket* t){
        Node* newNode=new Node(t);
        if(!head){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void insertM(Ticket* t,int pos){
        if(pos==0){
            insertA(t);
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(!temp) return;
        Node* newNode=new Node(t);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void sortB(){
        for(Node* i=head;i!=NULL;i=i->next){
            Node* mini=i;
            for(Node* j=i->next;j!=NULL;j=j->next){
                if(j->data->fare > mini->data->fare){
                    mini=j;
                }
            }
            if(mini!=i){
                Ticket* temp=i->data;
                i->data=mini->data;
                mini->data=temp;
            }
        }
    }

    void Search(int id){
        Node *temp=head;
        bool flag=false;
        while(temp){
            if(temp->data->ticketID==id){
                cout<<"Found Ticket: ";
                temp->data->display();
                flag=true;
                break;
            }
            temp=temp->next;
        }
        if(!flag){
            cout<<"Ticket with ID "<<id<<" not found"<<endl;
        }
    }

    void display(){
        Node* temp=head;
        while(temp){
            temp->data->display();
            temp=temp->next;
        }
    }
};

int main(){
    Single s;
    Ticket* t1=new Ticket(1,"Amy","Paris",200);
    Ticket* t2=new Ticket(2,"Rafi","London",150);
    Ticket* t3=new Ticket(3,"Nila","Tokyo",300);

    s.insertE(t1);
    s.insertE(t2);
    s.insertE(t3);

    cout<<"Before sort:"<<endl;
    s.display();

    s.sortB();

    cout<<"After sort:"<<endl;
    s.display();

    s.Search(1);  
    s.Search(5);   
}
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

class Bst{
public:
    Node* root;
    Bst(){ root = nullptr; }

    Node* insert(Node* node, int val){
        if(node==nullptr){
            return new Node(val);
        }
        if(val < node->data){
            node->left = insert(node->left, val);
        } else if(val > node->data){
            node->right = insert(node->right, val);
        }
        return node;
    }

    void search(Node* node, int val){
        bool flag=false;
        Node* temp=node;
        while(temp){
            if(temp->data==val){
                cout<<"found"<<endl;
                flag=true;
                break;
            } else if(val < temp->data){
                temp=temp->left;
            } else{
                temp=temp->right;
            }
        }
        if(!flag){
            cout<<"not found"<<endl;
        }
    }
};

int main(){
    Bst tree;

    tree.root = tree.insert(tree.root,3);
    tree.root = tree.insert(tree.root,1);
    tree.root = tree.insert(tree.root,2);

    tree.search(tree.root,2);
    tree.search(tree.root,5);

    return 0;
}
#include<iostream>
using namespace std;


class Node{
public:
    Ticket* data;
    Node* left;
    Node* right;
    Node(Ticket* t){
        data=t;
         left=NULL;
         right=NULL;
    }
};
class Bst{
public:
    Node*root;
    Node* insert(Node*node,int val){
    if(node==nullptr){
        return new Node(val);
    }if(val<node->data){
    node->left=insert(node->left,val);
    }else if(val>node->data){
    node->right=insert(node->right,val);
    }
    return node;
    }
    void search(Node*node,int val){
        bool flag=false;
    if(node==nullptr){
        flag=false;
        
    }else if(node->data==val){
        cout<<"found";
    flag=true;
    }else if(val<node->data){
       flag=search(node->left,val);
    }else{
    flag=search(node->right,val);
    }
    if(!flag){
        cout<<"not found";
    }
    
};

int main(){
    
}
