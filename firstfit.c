#include<stdio.h>
void main()
   {
    int Process[5];
    
    struct memory{    //Memory available
       int size;
       int flag;
     }m[5];
     
    printf("Enter the memory used by the process\n");
    for (int i=0;i<5;i++)
        scanf("%d",&Process[i]);
        
    printf("Enter the size of memory slots available :\n");
    for (int i=0;i<5;i++)
       {
        scanf("%d",&m[i].size);
        m[i].flag=0;
       }
       
    //Memory Allocation
    for (int i=0;i<5;i++)
       {
        for (int j=0;j<5;j++)
           {
            if(Process[i]<=m[j].size)
               {
                if (m[j].flag==1)
                   continue;
                else
                   {
                    printf("Process %d is allocated to %d Memory\n",i+1,m[j].size);
                    m[j].flag=1;
                    break;
                   }
               }
          
               
           }
       }   
   }
