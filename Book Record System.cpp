#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string booktitle;
    double bookprice;

public:
    void setbook(string title, double price);
    void display();
};

void Book::setbook(string title, double price)
{
    booktitle = title;
    bookprice = price;
}

void Book::display()
{
    cout << "Book Title: " << booktitle << endl;
    cout << "Book Price: " << bookprice << endl;
}

int main()
{
    Book mybook;

    strng inputtile;
    double inputprice;

    cout << "Enter book title: ";
    getline(cin, inputtitle);

    cout << "Enter book price: ";
    cin >> inputprice;

    mybook.setbook(inputtitle, inputprice);
    mybook.display();
    return 0;
}