#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    long cnum;
    cnum = get_long("Number:");
    printf("%li",cnum);
    if(log10(abs(cnum)) == 15 ){
        printf("happy");
    }
}
