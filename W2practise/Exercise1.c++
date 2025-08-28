#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int substract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int divide(int a, int b=1){
    return a/b;
}
double divide(double a, double b=1){
    return a/b;
}
double add(double a, double b){
    return a+b; 
}
int main(){
    cout<<"The sum of a+b is :"<< add(5,3) <<endl;
    cout<<"The substraction of a-b is :"<< substract(10,4) <<endl;
    cout<<"The multiple of a*b is :"<< multiply(7,6) <<endl;
    cout<<"The division of a/b is :"<< divide(20,4) <<endl;
    cout<<"The double of a+b is :"<< add(2.5,4.2) <<endl;
    cout<<"The double of a/b is :"<< divide(9.0) <<endl;
}



