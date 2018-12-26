//
//  main.c
//  Armstrong Number
//
//  Created by Archit Garg on 30/12/17.
//  Copyright © 2017 Archit Garg. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    int num,n,rem,c=0,act,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    num=n;
    act=n;
    for(;n!=0;)
    {
        c++;
        n/=10;
    }
    for(;num!=0;)
    {
        rem=num%10;
        sum=sum+pow(rem,c);
        num/=10;
    }
   // printf("%d\n",sum);
    if(act==sum)
        printf("%d is an Armstrong Number\n",act);
    else
        printf("%d is not an Armstrong Number\n",act);
    return 0;
}
