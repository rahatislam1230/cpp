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
