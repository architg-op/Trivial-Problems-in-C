//
//  main.c
//  Pair of K
//
//  Created by Archit Garg on 12/09/18.
//  Copyright © 2018 Archit tech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int n;
    int k;
    int cnt = 0;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        int *a = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((a[i] + a[j]) == k) {
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
        cnt = 0;
        free(a);
    }
    return 0;
}
