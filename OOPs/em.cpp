#include <iostream>
#include <string> 
using namespace std;
class employee {
private:
    string name; 
    int id;      
public: 
    employee(string Name, int Id) {
        name = Name;
        id = Id;
    }
    void print() {
        cout << id << " " << name << endl;
    }
}; 
class manager : public employee {
private:
    string dept;
public:
    manager(string NAME, int ID, string Dept) 
        : employee(NAME, ID), dept(Dept) {}
    void print() {
        employee::print(); 
        cout << dept << endl;
    }
}; 
int main() {
    manager A("m1", 101, "engg");
    A.print();
}
