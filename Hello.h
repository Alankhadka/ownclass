 #include<string>
 #include<iostream>
using namespace std;
class Hello
 {
 private:
 string Name;
string krea;
 public:
 Hello(string);
 ~Hello();
 void setName(string);
 string getName();
 void displayMessage();
};
