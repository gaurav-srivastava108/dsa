#include<iostream>
using namespace std;
class Cricketer{
public:
        string name;
        int run;
        int age;

        Cricketer(string name,int run,int age){
            this->name=name;
            this->run=run;
            this->age=age;

        }
        void print(){
    cout<<this->name<<" "<<this->run<<" "<<this->age<<endl;
}
};
// void print(Cricketer c){
//     cout<<c.name<<" "<<c.run<<" "<<c.age<<endl;
// }
int main(){
        Cricketer c1("virat",25000,33);
        Cricketer c2("rohit",24000,34);
        // print(c1);
        // print(c2);

        c1.print();
        c2.print();

}