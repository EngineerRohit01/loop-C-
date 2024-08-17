#include<iostream>

int main(){
    int a;
    int i;
    int b = 0;
    std::cout<<"enter no for loop: ";
    std::cin>>a;

    for(i=1; i<=a; i++){
        //std::cout<<i<<"\n";
        //std::cout<<"\n";
        b = b+i;
        std::cout<<b<<"\n";
    }
}