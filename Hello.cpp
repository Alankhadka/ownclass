#include<iostream>
#include<string>
#include "Hello.h"
using namespace std;

Hello::Hello(string fname)
{
setName(fname);

}

Hello::~Hello()
{

}
void Hello::setName(string fname)
{
Name=fname;

}
string Hello::getName()
{
return Name;
}

void Hello::displayMessage()
{
cout<<"Hello "<<getName()<<"!!!"<<endl;
}
