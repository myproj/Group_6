#include "functions.h"
#include <iostream>
// #include <stdio.h>

//recurrision
//arc
int factorial(int n){
    if(n<0)
    {
<<<<<<< HEAD
        std::cout<<"no negative";
=======
        // printf("no negative");
>>>>>>> bug
        return -1;
    }
    if(n!=1&&n>1){
	return(n * factorial(n-1));
    }
    else return 1;
}
