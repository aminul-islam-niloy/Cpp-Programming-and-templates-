
#include<string.h>
#include<stdio.h>
struct invent{
    char *name[20];
    int *number;
    float *price;

};
int main(){
    struct invent product[3], *ptr;
    printf("\n INPUT");
    for(ptr= product; ptr<product;ptr++)
    {
        scanf("%s %d %f",&ptr->name,&ptr->number,&ptr->price);

    }
     printf("\n Output");
    ptr= product;
    while(ptr<product+3){
        printf("%-20s %5d %10.2f\n",ptr->name,ptr->number,ptr->price);
        ptr++;
    }
    return 0;
}