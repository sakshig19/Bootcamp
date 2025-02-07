// Program for unit conversion
#include <stdio.h>
int main(){
    int choice,kg,g,cm,m;
    printf("MENU\n1.Kg to g\n2.g to Kg\n3.M to cm\n4.cm to m\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter the Kg unit: ");
        scanf("%d",&kg);
        g=kg*1000;
        printf("%d grams",g);
        break;

        case 2:
        printf("Enter the grams unit: ");
        scanf("%d",&g);
        kg=g/1000;
        printf("%d Kilograms",kg);
        break;

        case 3:
        printf("Enter the meter unit: ");
        scanf("%d",&m);
        cm=m*100;
        printf("%d centimeters",cm);
        break;

        case 4:
        printf("Enter the Centimeter unit: ");
        scanf("%d",&cm);
        m=cm/100;
        printf("%d meters",m);
        break;
    }
    return 0;
}