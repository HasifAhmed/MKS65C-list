#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {int i; struct node *next;};

void print_list(struct node * p){
  if(*(p->next) == NULL){
    printf("NULL");
  
  }else{
    
      printf("%d ->",p->i);
  print_list(p.next);
  }
  
}

struct node * insert_front(struct node * p, int val){
  struct node newheader;
  newheader.i = val;
  newheader.next = p;
}

struct node * free_list(struct node * p){
}


int main(){
  struct node third;
  third.i = 4;
  struct node second;
  second.i = 3;
  second.next = &third;
  struct node first;
  first.next = &second;

  print_list(first.next);
 
  
  return 0;
}
