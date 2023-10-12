#include <stdio.h>
#include <conio.h>

int main(){
    int i,j,k,s,n;
    printf("Masukkan banyaknya baris: ");
    scanf("%d", &n);

    
    for(i=1, s=n; i<=n; i++, s--){
        for(k=1; k<s;k++){
            printf(" ");
        }
        for(j=1; j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");

    }





    getch();
}