#include <stdio.h>

int main(){
  unsigned int x = 4205067000;
  char * c = &x;

  //printf("%d\n",sizeof(x));
  //printf("%d\n",sizeof(c));

  printf("int in hex:%x\n",x); //faa43af8
  
  int i=0;
  for (int i;i<sizeof(x);i++){
    printf("%hhx\n",*(c+i));
  }
  
  return 0;
}
