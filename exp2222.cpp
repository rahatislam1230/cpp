#include <iostream>
using namespace std;

struct Book {
    char title[50];
    char author[50];
    double price;
};

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    Book books[n];
    for (int i = 0; i < n; i++) {
        cout << "Title (one word): ";
        cin >> books[i].title;
        cout << "Author (one word): ";
        cin >> books[i].author;
        cout << "Price: ";
        cin >> books[i].price;
    }
    cout << "Books priced above 500:";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (books[i].price > 500) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Price: " << books[i].price << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No books priced above 500.";
    }

    return 0;
}
