#include<stdio.h>

int main(){

    int AofM, fifties, twenties, tenner, remainder, result;

    printf("How much money do you need?\n");
    scanf("%d", &AofM);
    fifties=AofM/50;
    if (fifties>0)
    {
        remainder=AofM%50;
        
    }
    else
    {
        remainder=AofM;
    }
    if (remainder>0)
    {
        twenties=remainder/20;
        if (twenties>0)
        {
            remainder=remainder%20;
        }
        else
        {
            remainder=remainder;
        }
        if (remainder>0)
        {
            tenner=remainder/10;
            printf("%d fifties, %d twenties and %d tenner are being prepared..\n", fifties,twenties,tenner);
            
        }
        else
        {
            printf("%d fifties and %d twenties are being prepared ...\n", fifties, twenties);
        }
        
        
        
        
        
    }
    else
    {
        printf("%d fifties are being prepared ...\n", fifties);
    }
    
    
    
    
    
    








    return 0;
}