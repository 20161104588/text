//
//  main.c
//  text
//
//  Created by 20161104588 on 17/6/13.
//  Copyright © 2017年 20161104588. All rights reserved.
//

#include <stdio.h>
int main(int argc,const char *argv[])
{
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//a20161104588//Desktop//text//sr.txt","r+");
    fw=fopen("//Users//a20161104588//Desktop//text//sc.txt","w");
    int a,b,c;
    fscanf(fr,"%d %d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    fprintf(fw,"%d+%d=%d\n",a,b,c);
    return 0;
}
