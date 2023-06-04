#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Book {
    string title;
    string author;
    string isbn;
};

vector<Book> books;

void addBook() {
    Book book;
    cout << "Enter Book Title: ";
    getline(cin , book.title);
    cout << "Enter Book Author: ";
    getline(cin, book.author);
    cout << "Enter Book ISBN: ";
    getline(cin, book.isbn);
    books.push_back(book);
    cout << book.title << " book has been successfully added." << endl;
}

void removeBook() {
    int input;
    cout << "1. By Book Name" << endl;
    cout << "2. By ISBN" << endl;
    cout << "3. Main Menu" << endl;
    cin >> input;
    

    switch (input) {
        case 1: {
            string booktemp;
            cout << "Enter Book Name of the book to remove: ";
            getline(cin >> ws, booktemp);

            for (auto it = books.begin(); it != books.end(); ++it) {
                if (it->title == booktemp) {
                    books.erase(it);
                    cout << "Book removed successfully!" << endl;
                    return;
                }
            }

            cout << "Book not found!" << endl;
            break;
        }
        case 2: {
            string isbn;
            cout << "Enter ISBN of the book to remove: ";
            getline(cin >> ws, isbn);

            for (auto it = books.begin(); it != books.end(); ++it) {
                if (it->isbn == isbn) {
                    books.erase(it);
                    cout << "Book removed successfully!" << endl;
                    return;
                }
            }

            cout << "Book not found!" << endl;
            break;
        }
        case 3:
            break;
        default:
            cout << "Please input correct choice.." << endl;
    }
}

void displayBooks() {
    if (books.empty()) {
        cout << "No books in the library." << endl;
    } else {
        cout << "Books in the library:" << endl;
        for (const auto& book : books) {
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "ISBN: " << book.isbn << endl;
            cout << endl;
        }
    }
}

void displayMenu() {
    cout << "Library Management System" << endl;
    cout << "1. Add a book" << endl;
    cout << "2. Remove a book" << endl;
    cout << "3. Display all books" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                removeBook();
                break;
            case 3:
                displayBooks();
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}
