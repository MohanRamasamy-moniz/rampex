#include<stdio.h>
int main(){
    char let='A';
    if(let>='a' && let<='z'){
        printf("small");
    }
    else if(let>='A' && let<='Z'){
        printf("capital");
    }
}
