#include <stdio.h>

void main() {
    int memblok, limit, i, j;
    printf("Enter the number of memory blocks and number of processes\n");
    scanf("%d%d", &memblok, &limit);

    struct memory {
        int size, alloc;
    } m[memblok];

    struct process {
        int psize, flag;
    } p[limit];

    printf("Enter the size of memory blocks\n");
    for (i = 0; i < memblok; i++) {
        scanf("%d", &m[i].size);
        m[i].alloc = 0;
    }

    printf("Enter the size of processes\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &p[i].psize);
        p[i].flag = 0;
    }

    // First Fit Allocation
    for (i = 0; i < limit; i++) {
        for (j = 0; j < memblok; j++) {
            if (p[i].flag == 0 && p[i].psize <= m[j].size && m[j].alloc == 0) {
                m[j].alloc = 1;
                p[i].flag = 1;
                printf("Process %d is allocated in %d block\n", p[i].psize, m[j].size);
                break; // Move to the next process after allocation
            }
        }
    }

    for (i = 0; i < limit; i++) {
        if (p[i].flag == 0) {
            printf("There is no space for %d process\n", p[i].psize);
        }
    }
}

