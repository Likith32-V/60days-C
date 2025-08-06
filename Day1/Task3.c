#include<stdio.h>
int var; 
int main(){


int id=4;
static int i;
int *p=NULL; 

printf("Global: [%p]\n",  &var);  
printf("Static: [%p]\n",  &i);  
printf("Local: [%p]\n",  &id);  
printf("Pointer: [%p]\n", (void*)p); 
return 0;
}
