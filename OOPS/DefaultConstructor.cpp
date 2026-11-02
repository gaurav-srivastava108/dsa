#include<iostream>
using namespace std;
class Student{
public:
        string name;
        int rno;
        float gpa;
        Student(){
            //default constructor
        }
        Student (string s,int r,float g){//parameterised constructor
            name=s;
            rno=r;
            gpa=g;
        }

};


int main(){
        Student s1("gaurav",33,8.44);

        Student s2;
        s2.name="harshit";
        s2.rno=38;
        s2.gpa=9.23;


        cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
 
        cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}