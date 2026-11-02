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

int main(){
        // Cricketer c1("virat",25000,33);
        // Cricketer c2("rohit",18994,34);
        Cricketer c1("virat",25000,33);
        Cricketer *c2=new Cricketer("rohit",18994,34);

        cout<<c1.name<<" "<<c1.run<<endl;
        cout<<c2->age<<" "<<c2->run<<endl;


        

}