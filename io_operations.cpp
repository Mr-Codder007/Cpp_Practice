#include<iostream>
#include<string>
int main()
{
    int age;
    std::string fullname;
    std::cout<<"Hello World"<<std::endl;
    std::cerr<<"Somthing went wrong baby!"<<std::endl;
    std::clog<<"This is a log message"<<std::endl;
    std::cout<<"Enter your name: ";
    std::getline(std::cin,fullname);
    std::cout<<"Enter your age: ";
    std::cin>>age;
    std::cout<<"Hello "<<fullname<<" You are "<<age<<" Years old right?"<<std::endl;
    return 0;
}