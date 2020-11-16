#include<stdio.h>
#include<string.h>

void remoe(char a[],int i){
    for ( i ;a[i]!=0; i++)
    {
        a[i]= a[i+1];
    }
    
}

int main(int argc, char const *argv[])
{
    int i;
    char a[] = "eHelleo Woreldee!e";
    char x = 'e';
    printf("%s",a);
    for (i = 0;a[i] != '\0'; i++)
    {
        if(a[i] == x){
            remoe(a,i);
            i -= 1;
        }
    }
    
    printf("\n%s",a);
    return 0;
}
