#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int eight = 0;

    //prompt the value from user
    do
    {
        eight =  get_int("height of the Pyramide?");

    }
    //validation the value
    while (!(eight > 0 && eight < 9));

    //print the pyramide
    for (int i = 0; i < eight ; i++)
    {
        //write the inverse pyramid with "." on the left
        for (int k = (eight - 1) - i; k > 0; k--)
        {
            printf(" ");
        }
        //print rows
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}


