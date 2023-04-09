#include<stdio.h>
void main(){
    int a[100];
    int i,j,k;
    int key;

    printf("enter the number of element\n");
    scanf("%d",&i);
    printf("enter the element\n");
    for(int j=0;j<i;j++){
        scanf("%d",&a[j]);
    }
    printf("enter the key\n");
    scanf("%d",&key);
    for(int k=0;k<i;k++){
        if(a[k]==key){
            printf("the element found\n");
            printf("element location=%d",k);
            break;
        }
    }
    if(k==i){
        printf("element not found\n");

    }

}
