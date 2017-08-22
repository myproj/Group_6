#include "functions.h"
#include <iostream>
//recurrision
//arc
int factorial(int n){
    if(n<0)
    {
        std::cout<<"no negative ";
        return -1;
    }
    if(n!=1&&n>1){
	return(n * factorial(n-1));
    }
    else return 1;
}
