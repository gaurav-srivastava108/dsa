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
    
};
void change(Cricketer* c){
    c->age=37; //(*c).age=37;

}
int main(){
        Cricketer c1("virat",25000,33);
        cout<<c1.age<<endl;
        change(&c1);
        cout<<c1.age<<endl;


        // Cricketer* p1=&c1;
        // cout<<(*p1).run<<endl;(p1->run) //c1.run
        // (*p1).age=37;(p1->age)// c1.age=37;
        // cout<<c1.age<<endl;
        

}