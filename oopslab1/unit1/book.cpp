#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    float price;
    void display(){
        cout<<"Title:"<<title
            <<",Author:"<<author
            <<",Price:₹"<<price<<endl;
    }
};
int main(){
    Book b1,b2;
    b1.title="c++ programming";
    b1.author="Bjarne Stroustrup";
    b1.price=750.50;
    b2.title="data structures";
    b2.author="Marks Allen Weiss";
    b2.price=852.28;
    b1.display();
    b2.display();
    return 0;
}