#include"bookdb.h"

void BookDb::addBook(std::string isbn, std::string title, std::string author,
    double price, int pages, int year)
{
    //Method-1
    //Book tb(isbn,title,author,price,pages,year);
    //books.push_back(tb);
    
    //Method-2, ok, preferred
    books.push_back(Book(isbn,title,author,price,pages,year));

    //Method-3, also preferred
    //books.emplace_back(isbn,title,author,price,pages,year);
}

void BookDb::displayAllTitles(){
    for(const Book& ref: books)
        std::cout << ref.get_title() << std::endl;
    std::cout << "==================================" << std::endl;
}
void BookDb::displayAll()
{
    //for(int i=0;i<books.size();i++)
    //    books[i].display();

    //for(const Book& ref : books)
    //    ref.display();

    std::vector<Book>::iterator iter;
    for(iter=books.begin();iter!=books.end();++iter)
        iter->display();
}

bool BookDb::isBookFound(std::string key){
    for(const Book& ref : books){
        if(key == ref.get_isbn()) return true;
    }

    return false;
}

Book* BookDb::findBookByISBN(std::string key){
    for( Book& ref : books){
        if(key == ref.get_isbn()) return &ref;
    }
    return nullptr;
}

double BookDb::findAveragePrice(){
    double total = 0.0;
    for(const Book& ref : books)
        total += ref.get_price();
    return total/books.size();
}

double BookDb::findMaxPriceOfAllBooks(){
    int maxPrice=0;
    for(const Book& ref : books)
        if(ref.get_price() > maxPrice) maxPrice = ref.get_price();
    return maxPrice;
}

int BookDb::countBooksByYearOfPublishing(int kyear){
    int count = 0;
    for(const Book& ref : books)
        if(kyear == ref.get_year()) count++;
    return count;
}

Book* BookDb::findBookWithMaxPrice(){
    int maxPrice=0;
    Book *maxBook;
    for( Book& ref : books)
        if(ref.get_price() > maxPrice){
            maxPrice = ref.get_price();
            maxBook = &ref;
        }
    return maxBook;
}