#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
        int i,k,num,space;
    printf("C program to print a diamond shape\n\n");
    printf("Enter a number between 1 and 12: ");
    scanf("%i",&num);
    int maxiK=2*num-1;
if(num>0&&num<=12){
    for(i=1;i<=num;i++){
        for(space=1;space<=num-i;space++){
            printf(" ");
        }
            for(k=1;k<=2*i-1;k++){
                printf("*");

        }

     printf("\n");
    }

    for(i=1;i<=num-1;i++){
            for(space=1;space<=num-(num-i);space++){
                printf(" ");
            }
                for(k=1;k<=maxiK-2*i;k++){
                    printf("*");
        }
    printf("\n");
    }
    }else{
        printf("Enter a number between 1 and 12\n");
    }
    }

    return 0;
}
