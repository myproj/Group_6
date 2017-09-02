#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int temp;
    temp = factorial(5);

<<<<<<< HEAD
    cout<<"\nThe factorial of 5 is %d\n"<<factorial(5);
=======
    printf("\nThe factorial of 5 is %d\n", temp);
>>>>>>> bug
    return 0;
}
