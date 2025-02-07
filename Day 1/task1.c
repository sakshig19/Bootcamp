#include<stdio.h>
void q1a(int n){
    // Right angled triangle
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            printf("*");
        }
        printf("\n");
    }
}
// Inverted right angled triangle
void q1b(int n){
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// Number triangle
void q1c(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            printf("%d",col);
        }
        printf("\n");
    }
}
// Character triangle
void q1d(int n){
    
    for(int row=1; row<=n; row++){
        char ch='A';
        for(int col=1; col<=row; col++){
            printf("%c",ch);
            ch++;
        }
        
        printf("\n");
    }
}
// Star pyramid
void q2a(int n){
    for(int i =0; i<n; i++){
        for(int space =i; space<=n-1; space++){
            printf("  ");
        }
        for(int j =1; j<=i*2+1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void q2b(int n){
    for(int i=0; i<n; i++){
        for(int s=i; s<=n-1; s++){
            printf("  ");
        }
        for(int j=1; j<=i*2+1; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
void q2c(int n){
    for(int i=n;i>=1;--i)
    {
        for(int space=0;space<=i-1;++space)
         printf("  ");
         for(int j=1;j<=2*i-1;++j)
         printf("* ");
         for(int j=0;j<i-1;++j)
         printf("* ");
    printf("\n");     

    }


}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    // q1a(n);
    // q1b(n);
//    q1c(n);
    // q1d(n);
    // q2a(n);
    // q2b(n);
    q2c(n);    
    return 0;
}