#include <stdio.h>
#include <stdbool.h>

bool stackDirection(int *arg){

    int x;

    if(arg == NULL){
        return stackDirection(&x);
    }
    else{
        return &x > arg;
    }
}

int main(){
    printf("%s\n", stackDirection(NULL) ? "Up" : "Down");
}