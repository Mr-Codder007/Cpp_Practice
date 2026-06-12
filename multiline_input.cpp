#include<iostream>
#include<string>
int main()
{
    std::string words;
    std::cout<<"Write things you want to write\n";
    std::getline(std::cin,words);
    std::cout<<"\n"<<words;
    return 0;
}