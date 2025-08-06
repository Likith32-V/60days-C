#include<stdio.h>
int var; 
int main(){


int id=4;
static int i;
int *p=NULL;

printf("Global: [%d]", var); 
printf("Static: [%d]", i ); 
printf("Local: [%d]", id); 
printf("Pointer: [%p]", (void*)p); 
return 0;
}
