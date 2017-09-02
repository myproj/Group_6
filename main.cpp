#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int temp;
    temp = factorial(5);

    printf("\nThe factorial of 5 is %d\n", temp);
    return 0;
}
