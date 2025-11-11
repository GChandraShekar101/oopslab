#include<iostream>
using namespace std;
class car{
    public:
    string model;
    string company;
    float price;
    void display(){
        cout<<"Model:"<<model
            <<",Company:"<<company
            <<",Price:₹"<<price<<endl;
    }
};
int main(){
    car c1,c2,c3;
    c1.model="Innova";
    c1.company="Toyota";
    c1.price=2500000.00;
    c2.model="civic";
    c2.company="honda";
    c2.price=1200000.00;
    c3.model="i20";
    c3.company="Hyundai";
    c3.price=800000.00;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}