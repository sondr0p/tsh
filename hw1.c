#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void doit(){
     fork();
     fork();
     printf("hello\n");
     return;
}

int main(){
     doit();
     printf("hello\n");
     exit(0);
}
