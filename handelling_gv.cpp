#include<iostream>
int main()
{
    int var1; //stores garbage value
    int var2 {}; // stores 0 by default
    int var3(12); // list initialization, prevents narrowing
    int var4(13); // direct initialization, allows narrowing
    int var5=15; // copy initialization, allows narrowing
    std::cout<<var2;
    return 0;
}