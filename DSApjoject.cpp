#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Book structure
struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
    string issuedTo;
};

// Function prototypes
void addBook(vector<Book>& books);
void searchBookByID(const vector<Book>& books);
void searchBookByTitle(const vector<Book>& books);
void issueBook(vector<Book>& books);
void returnBook(vector<Book>& books);
void listAllBooks(const vector<Book>& books);
void deleteBook(vector<Book>& books);
void sortBooks(vector<Book>& books);

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add New Book\n";
        cout << "2. Search Book by ID\n";
        cout << "3. Search Book by Title\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. List All Books\n";
        cout << "7. Delete Book\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(books); break;
            case 2: searchBookByID(books); break;
            case 3: searchBookByTitle(books); break;
            case 4: issueBook(books); break;
            case 5: returnBook(books); break;
            case 6: listAllBooks(books); break;
            case 7: deleteBook(books); break;
            case 8: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 8);

    return 0;
}

// Function definitions
void addBook(vector<Book>& books) {
    Book newBook;
    cout << "Enter Book ID: ";
    cin >> newBook.id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, newBook.title);
    cout << "Enter Book Author: ";
    getline(cin, newBook.author);
    newBook.isIssued = false;
    newBook.issuedTo = "";
    books.push_back(newBook);
    cout << "Book added successfully.\n";
}

void searchBookByID(const vector<Book>& books) {
    int id;
    cout << "Enter Book ID: ";
    cin >> id;
    for (const auto& book : books) {
        if (book.id == id) {
            cout << "Book found:\n";
            cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author;
            cout << ", Status: " << (book.isIssued ? "Issued" : "Available") << "\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

void searchBookByTitle(const vector<Book>& books) {
    string title;
    cout << "Enter Book Title: ";
    cin.ignore();
    getline(cin, title);
    for (const auto& book : books) {
        if (book.title == title) {
            cout << "Book found:\n";
            cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author;
            cout << ", Status: " << (book.isIssued ? "Issued" : "Available") << "\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

void issueBook(vector<Book>& books) {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    for (auto& book : books) {
        if (book.id == id && !book.isIssued) {
            cout << "Enter the name of the student: ";
            cin.ignore();
            getline(cin, book.issuedTo);
            book.isIssued = true;
            cout << "Book issued successfully.\n";
            return;
        }
    }
    cout << "Book not available for issue.\n";
}

void returnBook(vector<Book>& books) {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;
    for (auto& book : books) {
        if (book.id == id && book.isIssued) {
            book.isIssued = false;
            book.issuedTo = "";
            cout << "Book returned successfully.\n";
            return;
        }
    }
    cout << "Invalid Book ID or the book is not issued.\n";
}

void listAllBooks(const vector<Book>& books) {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }
    cout << "List of all books:\n";
    for (const auto& book : books) {
        cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author;
        cout << ", Status: " << (book.isIssued ? "Issued" : "Available") << "\n";
    }
}

void deleteBook(vector<Book>& books) {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->id == id) {
            books.erase(it);
            cout << "Book deleted successfully.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

