#include<stdio.h>

int main(){

    int n,i,x;
    printf("Lütfen boyut sayısını giriniz: \n");
    scanf("%d",&n);
    int a[n];
    printf("Lütfen dizi elemanlarını giriniz:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Aranacak değeri giriniz: \n");
    scanf("%d",&x);
    int l=0, r=n-1, m=(l+r)/2, found=0;
    while (l<=r && !found){
        if (x==a[m]){
            found=1;
        }
        else if (x>a[m])
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
        m=(l+r)/2;
    }
    
    if (found==1){
        printf("%d hücresinde aranılan değer bulundu.\n",m);
    }
    else
    {
        printf("Aranan değer dizide mevcut değil.\n");
    }
    
    













    return 0;
}