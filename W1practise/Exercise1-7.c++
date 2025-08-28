#include <iostream>
int main(){
    std::cout << "Hello World!\n";// Number1  


int studentCount = 30;
float temperature = 36.6;
char grade = 'A';
bool passed = true; 
std:: cout <<"Number of student: "<<studentCount<<"\n";
std:: cout <<"The temperature is: "<<temperature<<"\n";   
std:: cout <<"Student's grade is : "<<grade<<"\n"; 
if (true){
    std:: cout<<"The student is passed!\n";
} else{ 
    std:: cout<<"The student is falsed!\n";
} //Number2


int x;
int y;
int sum;
std::cout << "Type a number: ";
std::cin >> x;
std::cout << "Type another number: ";
std::cin >> y;
sum = x + y;
std::cout << "The result is: " << sum <<std::endl;  //NUmber3


int studentScore=20;
int StudentRecord =10;
float student_score=10.5;
const int MAX_BUFFER_SIZE=100; 
std::cout << "Student's score is: "<<studentScore<< std:: endl;
std::cout << "Student's record is:"<<StudentRecord<<std:: endl;
std::cout << "Student's score average is:"<<student_score<< std:: endl;
std::cout << "Maximum buffer size is:"<<MAX_BUFFER_SIZE<< std:: endl; //Number4
 


int num;
std:: cout<<"Enter a number : ";
std:: cin>>num;
if (num%2==0){
    std:: cout<<"Even\n";
} else{ 
    std:: cout<<"Odd\n";
} //Number5


char Grade ;
std:: cout<<"Enter a grade:";
std:: cin>>grade;
switch (grade)
{
case 'A':
    std:: cout<<"Excellent!";
    break;
case 'B':
    std:: cout<<"Good!";
    break;
case 'C':
    std:: cout<<"Fair!";
    break;
case 'F':
    std:: cout<<"Fail!";
    break;
default:
    std:: cout<<"Invalid grade!";
    break;
} //Number6


for (int i = 0; i <=50; i+=5) {
  std:: cout << i << "\n";
} //Number7


return 0;
} 

