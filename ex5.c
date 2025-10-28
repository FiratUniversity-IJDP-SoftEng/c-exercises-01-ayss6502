#include <stdio.h>

void sayHello(char name[]){
  printf("Hello, %s\n", name);
}
int main() {
  char name[100];
  printf("What's your name? ");
  scanf("%99s", name);
  sayHello(name);
}
