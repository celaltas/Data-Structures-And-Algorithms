#include<stdio.h>
int main(){

    int n,i,max, adress;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    int grade[n];
    printf("Enter the grade of student\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&grade[i]);
    }

    max = grade[0];
    adress=0;

    for (i = 0; i < n; i++)
    {
        if (grade[i]>max)
        {
            max=grade[i];
            adress=i+1;
        }
        
    }

    printf("%d with %d. student\n",max,adress);
    
    















    return 0;
}