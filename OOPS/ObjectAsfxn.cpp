#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
}
int main(){
    Car c1;
    c1.name="Honda City";
    c1.price = 1500000;
    c1.seats=5;

    Car c2;
    c2.name="Honda City";
    c2.price = 1500000;
    c2.seats=5;

    print(c1);
    print(c2);
}