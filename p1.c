#include<stdio.h>
int main(int argCount,char **args)
{   
    char s1[10]="gsss";
    char s2[]={'g','s','s','s'};
    char s3[]="gsss";
    char *p=s3;
    p[0]='G';
    printf("string:%s",s3);
   
}