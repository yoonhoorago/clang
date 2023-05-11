#include<stdio.h>
int main(){
    char text;
    text=getchar();
    printf("input:%c\n",text);
    while(getchar()!='\n');
    text=getchar();
    printf("input2:%c\n",text);
    return 0;
}