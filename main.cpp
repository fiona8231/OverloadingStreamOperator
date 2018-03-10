#include <iostream>
using namespace std;
class Info{
    string name;
    int age;
public:
    Info(){
        name = "Sayoli";
        age = 13;
    }

    friend istream &operator >> (istream &input, Info &person);
    friend ostream &operator << (ostream &output, Info &person );

};

//return type ostream
 ostream &operator << (ostream &output, Info &person ){
    output << "There is a cat downstairs. " << endl;
   output << "The name is : " << person.name << endl;
   output << "Age is : " << person.age << endl;

}

istream &operator >> (istream &input, Info &person){
    cout << "please enter the name and " << endl;
    input >> person.name >> person.age;
}

 int main() {

    Info cat;
    cin >> cat;
    cout << cat;
    return 0;
}