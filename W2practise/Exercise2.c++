#include <iostream>
using namespace std;
double computeAverage(const int arr[], int size);
int findMin(const int arr[], int size); 
int findMax(const int arr[], int size);
int arr[10]={0,1,2,3,4,5,6,7,8,9};
int main() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "Enter value for arr[" << i << "]: ";
        std::cin >> arr[i];
    }
    return 0;
}
