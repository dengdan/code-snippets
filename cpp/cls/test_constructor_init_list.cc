#include<iostream>
#include<string>
using namespace std;

class Book{
public:
    Book();
    Book(string isbn);

    string isbn;
};
Book::Book()=default;
Book::Book(string isbn):isbn(isbn){

}
int main(){
    Book book1, book2("book2");
    cout << book1.isbn << endl;
    cout << book2.isbn << endl;
}