#include "list.h"
int main(){
  struct node *node1 = NULL;
  node1 = insert_front(node1, 2);
  print_list(node1);
  node1 = insert_front(node1, 4);
  print_list(node1);

  node1 = free_list(node1);
  




  return 0;
}
