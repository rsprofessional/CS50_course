#include <cs50.h>
#include <stdio.h>

int main(void)
{

     // TODO: Prompt for start size
        int start;
        do {
             start = get_int("Start size: ");
        }
        while(start < 9);

      // TODO: Prompt for end size
        int ends;
        do{
             ends =get_int("End size:");
           }
        while(ends < start );

     // TODO: Calculate number of years until we reach threshold
        int year = 0;

        while(start < ends)
        {
            start = start + (start/3) - (start/4);
            year++;
        }

     // TODO: Print number of years
        printf("Year:, %i\n", year);
}