#include <stdio.h>

int main(){
  unsigned int x = 4205067000;
  unsigned int b = 4205067000;
  char * c = &x;
  char * d = &b;
  //printf("%d\n",sizeof(x));
  //printf("%d\n",sizeof(c));

  printf("int in hex:%x\n",x); //faa43af8
  
  int j=0;
  for (int j;j<sizeof(x);j++){
    printf("%hhx\n",*(c+j));
  }

  int i=0;
  for (int i;i<sizeof(x);i++){
    *c+=1;
    printf("byte %d: %hhx\n",i,*c);
    c++;
  }
  
  c-=4;
  int l=0;
  for (int l;l<sizeof(x);l++){
    *c+=16;
    printf("byte %d: %hhx\n",l,*c);
    c++;
  }
  
  return 0;
}
