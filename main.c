#include <stdio.h>
#include <stdlib.h>

int input1,input2;
int userschange;
int userschange1;
int currencies[8]={5,10,20,50,100,200,500,1000};

void calculateuserschange(){
    printf("C program to split a customers change to naira notes\n");
    printf("How much goods do you want to buy?:\n");
    scanf("%i",&input1);
    printf("Enter the amount you want to pay:\n");
    scanf("%i",&input2);
    userschange=input2-input1;
    userschange1=input2-input1;
}
void conditionsforuserschange(){

        if(input2>=input1&&input1>0&&input2>0){
        printf("users change:%i\n",userschange);
    }

}
void actualcalculation(){
    int anss;
    int i;
           if(input2>=input1&&input1>0&&input2>0){
                        printf("transaction in progress...\n");

        }else{
            printf("Invalid transaction\n");
        }
    for(i=7;i>=0;i--){
        anss=(int)userschange/currencies[i];
        userschange=userschange-(anss*currencies[i]);
        if(input2>=input1&&input1>0&&input2>0){
                        printf("%i of %i naira\n",anss,currencies[i]);
        }
    }
         if(userschange>0&&input2>=input1&&input1>0&&input2>0){
            printf("your remaining change is %i naira\n",userschange);
        }



}

   int main()
{

while(1){
    calculateuserschange();
    conditionsforuserschange();
    actualcalculation();
}
return 0;
}





