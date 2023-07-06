#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title;
    float price;

public:
    Media(const string& t, float p) : title(t), price(p) {}

    virtual void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Media {
private:
    int pageCount;

public:
    Book(const string& t, float p, int pc) : Media(t, p), pageCount(pc) {}

    void display() override {
        cout << "Book Details" << endl;
        Media::display();
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Media {
private:
    float playingTime;

public:
    Tape(const string& t, float p, float pt) : Media(t, p), playingTime(pt) {}

    void display() override {
        cout << "Tape Details" << endl;
        Media::display();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    string title;
    float price, playingTime;
    int pageCount;

    cout << "Enter book details:" << endl;
    cout << "Title: ";
    getline(cin, title);
    cout << "Price: ";
    cin >> price;
    cout << "Page Count: ";
    cin >> pageCount;
    cin.ignore();  // Ignore newline character

    Book book(title, price, pageCount);

    cout << endl << "Enter tape details:" << endl;
    cout << "Title: ";
    getline(cin, title);
    cout << "Price: ";
    cin >> price;
    cout << "Playing Time (in minutes): ";
    cin >> playingTime;

    Tape tape(title, price, playingTime);

    cout << endl << "Book Details:" << endl;
    book.display();

    cout << endl << "Tape Details:" << endl;
    tape.display();
    cout << endl << endl << endl << "~NITIKA SHARMA";
    cout << endl << "~22DCS109";

    return 0;
}
