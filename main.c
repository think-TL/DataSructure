#include<stdio.h>
#include<stdlib.h>

#define maxSize 100 //
#define LISTINCREMENT 20

typedef struct{
    int data[100];
    int length;
}Sqlist;


int init(Sqlist *l){
    int a;
    printf("input creat number element:");
    scanf("%d",&a);
    for(int i =0;i<a;i++){
        printf("input value\t");
        scanf("%d",&l->data[i]);
        l->length++;
    }
    return 0;
}

int showList(Sqlist *l){
    int i;
    printf("list element is ");
    for(i=0;i<l->length;i++){
        printf("%d\t",l->data[i]);
        printf("\n");
    }
    return 1;
}

int main(){
    Sqlist L;
    L.length =0;// init data lenght
    init(&L);
    showList(&L);
    return 0;
}



