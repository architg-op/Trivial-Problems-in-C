//
//  main.c
//  Iterative GCD
//
//  Created by Archit Garg on 18/08/18.
//  Copyright © 2018 Archit tech. All rights reserved.
//

#include <stdio.h>

int main() {
    int x, y, i = 1, gcd = 1;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    while(i<=x && i<=y)
    {
        if(x%i==0 && y%i==0)
            gcd=i;
        i++;
    }
    printf("GCD of %d and %d is %d.\n",x,y,gcd);
    return 0;
}
