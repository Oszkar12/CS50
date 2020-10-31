#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    //declaring must have variables
    float chg; //this is used to store the input number
    int blw; //this is used to store the values below 1
    int coins = 0; //coin counter

    do
    {
        chg = get_float("Change owed:");
    }
    while (chg < 0); //getting input, and checking if it's valid

    while (chg > 1) //if the input is above 1, subtracting 1 until it is below 1
    {
        chg = chg - 1;
        coins += 4;
        printf("%f\n", chg);
    }

    blw = round(chg * 100); // rounding the number to the hundreds

    while (blw >= 25)   //subtracting 25 and adding 1 to the coins each time it can subtract 25
    {
        blw = blw - 25;
        coins++;
    }
    //printf("25:%i\n",blw);


    while(blw >= 10) //same with 25, but this time with 10
    {
        coins++;
        blw = blw - 10;
    }
    //printf("10:%i\n",blw);

    while(blw >= 5) // so on
    {
        coins++;
        blw = blw - 5;
    }
    //printf("5:%i\n",blw);

    while (blw >= 1) // and so on
    {
        coins++;
        blw = blw - 1;
    }
    //printf("1:%i\n",blw);


    printf("%i\n", coins); //printing the result


}
