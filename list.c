#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {int i; struct node *next;};

void print_list(struct node * p){
  
  if(p->next == NULL){
    printf("END\n-----------\n");
  }
  else {
    struct node *hold = p;
    printf("%d -> \n", hold -> i);
    print_list(hold -> next);
  }

}

struct node * insert_front(struct node * p, int val){
  struct node *add  = (struct node *)malloc(sizeof(struct node));
  add->next = p;
  add->i = val;
  return add;
}

struct node * free_list(struct node * p){
  struct node * hold = p;
  struct node *temp = p;
  while(hold -> next){
    free(temp);
    hold = hold -> next;
    temp = hold;
  }
  free(temp);
  return p;
}


int main(){
  struct node *node1 = malloc(sizeof(struct node));
  node1 = insert_front(node1, 2);
  print_list(node1);
  node1 = insert_front(node1, 4);
  print_list(node1);
  free_list(node1);




  return 0;
}
