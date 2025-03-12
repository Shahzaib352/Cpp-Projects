#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 100;
const int MAX_USERS = 50;
const int MAX_ISSUED_BOOKS = 10;

class Book {
public:
    string title;
    string author;
    int yearOfPublication;
    string libraryCode;
    string isbn;
    string category;
    string status; // Available, Issued, Lost, On Order
    string issuedTo;
    int copyNumber;

    Book() {}

    Book(string t, string a, int y, string lc, string i, string c, string s, int cn)
        : title(t), author(a), yearOfPublication(y), libraryCode(lc), isbn(i), category(c), status(s), copyNumber(cn) {}
};

class User {
public:
    string userType; // student, teacher, library staff
    string accountNumber;
    Book issuedBooks[MAX_ISSUED_BOOKS];
    int bookCount;
    int maxBooksAllowed;
    int fine;

    User() {}

    User(string ut, string an, int mba)
        : userType(ut), accountNumber(an), bookCount(0), maxBooksAllowed(mba), fine(0) {}

    void addBook(Book book) {
        if (bookCount < maxBooksAllowed) {
            issuedBooks[bookCount++] = book;
        } else {
            cout << "Maximum books issued" << endl;
        }
    }

    void removeBook(string libraryCode) {
        for (int i = 0; i < bookCount; i++) {
            if (issuedBooks[i].libraryCode == libraryCode) {
                for (int j = i; j < bookCount - 1; j++) {
                    issuedBooks[j] = issuedBooks[j + 1];
                }
                bookCount--;
                break;
            }
        }
    }

    void displayIssuedBooks() {
        for (int i = 0; i < bookCount; i++) {
            cout << "Title: " << issuedBooks[i].title << ", Return Date: " << calculateReturnDate() << endl;
        }
    }

    string intToString(int number) {
        string result = "";
        if (number == 0) return "0";
        while (number > 0) {
            result = char((number % 10) + '0') + result;
            number /= 10;
        }
        return result;
    }

    string calculateReturnDate() {
        int additionalDays = 0;
        if (userType == "student") additionalDays = 7;
        else if (userType == "teacher") additionalDays = 90;
        else if (userType == "library staff") additionalDays = 21;

        return "Due in " + intToString(additionalDays) + " days";
    }
};

class Library {
private:
    Book books[MAX_BOOKS];
    User users[MAX_USERS];
    int bookCount;
    int userCount;

public:
    Library() : bookCount(0), userCount(0) {}

    void addBook(Book book) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount++] = book;
        } else {
            cout << "Library is full, cannot add more books" << endl;
        }
    }

    void addUser(User user) {
        if (userCount < MAX_USERS) {
            users[userCount++] = user;
        } else {
            cout << "Maximum users reached, cannot add more users" << endl;
        }
    }

    void listBooksByCategory(string category) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].category == category) {
                cout << "Title: " << books[i].title << ", Status: " << books[i].status << endl;
            }
        }
    }

    void issueBook(string libraryCode, string accountNumber) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].libraryCode == libraryCode && books[i].status == "Available") {
                books[i].status = "Issued";
                books[i].issuedTo = accountNumber;
                for (int j = 0; j < userCount; j++) {
                    if (users[j].accountNumber == accountNumber) {
                        users[j].addBook(books[i]);
                        break;
                    }
                }
                break;
            }
        }
    }

    void returnBook(string libraryCode, string accountNumber) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].libraryCode == libraryCode && books[i].status == "Issued" && books[i].issuedTo == accountNumber) {
                books[i].status = "Available";
                books[i].issuedTo = "";
                for (int j = 0; j < userCount; j++) {
                    if (users[j].accountNumber == accountNumber) {
                        users[j].removeBook(libraryCode);
                        break;
                    }
                }
                break;
            }
        }
    }

    void checkStatus(string libraryCode) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].libraryCode == libraryCode) {
                cout << "Status: " << books[i].status << endl;
                if (books[i].status == "Issued") {
                    cout << "Issued to: " << books[i].issuedTo << endl;
                }
                break;
            }
        }
    }

    void removeFine(string accountNumber) {
        for (int i = 0; i < userCount; i++) {
            if (users[i].accountNumber == accountNumber) {
                users[i].fine = 0;
                break;
            }
        }
    }

    void displayUserInfo(string accountNumber) {
        for (int i = 0; i < userCount; i++) {
            if (users[i].accountNumber == accountNumber) {
                cout << "Number of books issued: " << users[i].bookCount << endl;
                users[i].displayIssuedBooks();
                break;
            }
        }
    }
};

int main() {
    Library library;

    library.addBook(Book("Book1", "Author1", 2020, "B001", "ISBN001", "CS", "Available", 1));
    library.addBook(Book("Book2", "Author2", 2021, "B002", "ISBN002", "EE", "Available", 1));

    library.addUser(User("student", "S001", 3));
    library.addUser(User("teacher", "T001", 10));

    library.issueBook("B001", "S001");
    library.issueBook("B002", "T001");

    library.checkStatus("B001");

    library.displayUserInfo("S001");
    library.displayUserInfo("T001");

    library.returnBook("B001", "S001");

    library.removeFine("S001");

    return 0;
}

