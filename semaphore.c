#include<stdio.h>
#include<stdlib.h>
int mutex=1,empty=3,full=0;
int wait(int );
int signal(int );
void producer();
void consumer(); 
int main(){
  int choice;
  while(1){
  printf("Enter the choice:\n 1.Producer\t 2.Consumer\t 3.Exit\n");
  scanf("%d",&choice);
  switch(choice){
  case 1:
    {
      if(mutex==1 && empty!=0){
      printf("Data is produced!!\n");
        producer();
    }
      else{
       printf("Buffer full\n");
    }
    break;
    }
   case 2:
    {
      if(mutex==1 && full!=0){
      printf("Data is consumed!!\n");
       consumer();
    }
      else{
      printf("Buffer empty\n");
    }
    break;
    }
   case 3:
   exit(0);
  }
 }
}

 int wait(int S )
   {
   S--;
    return S;
   }
 int signal(int S)
   {
   S++;
    return S;
   }

void producer(){
   mutex=wait(mutex);
   full=signal(full);
   empty=wait(empty);
   printf("Producer is called\n");
   mutex=signal(mutex);
   }
  
void consumer(){
   mutex=wait(mutex);
   empty=signal(empty);
   full=wait(full);
   printf("Consumer is called\n");
   mutex=signal(mutex);
   }
  

