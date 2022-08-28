#include <stdio.h>
#include <stdlib.h>
//c program to sort an array(bubble sort)
int i,j,min,max,k,f,num;
void checkminandmaxnumber(){
    int sorted[9];
    int numbers[9];
    printf("How many numbers do you want to sort:");
    scanf("%i",&num);
    printf("Enter %i numbers to be sorted:",num);

    //collect numbers from user
    for(i=0;i<num;i++){
            scanf("%i",&numbers[i]);
    }
    //find minimum value
    for(i=0;i<num;i++){
            min=i;
        for(j=0;j<num;j++){
            if(numbers[j]<numbers[min]){
                min=j;
            }

        }
        //find maximum value
        for(f=0;f<=0;f++){
                max=f;
                for(k=i+1;k<num;k++){
                    if(numbers[max]<numbers[k]){
                        max=k;
                    }
                }
            }
            sorted[i]=numbers[min];
            //remove numbers[min] from the next check
            numbers[min]=numbers[max]+1;
}
printf("The numbers in ascending order:\n");
         for(i=0;i<num;i++){
        printf("%i\n",sorted[i]);
    }
}
int main()
{
    while(1){
    checkminandmaxnumber();
    }
return 0;
    }






