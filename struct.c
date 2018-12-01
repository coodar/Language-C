#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
struct tnode{
  int count;
  char *key;
  struct tnode *left, *right;
};
struct tnode *talloc(void);
int main()
{
  struct tnode *test;
  char *word = "h";
  test = talloc();
  test->count = 1;
  test->key = word;
  test->left = test->right = NULL;
  printf("tnode is %p, size of tnode %d, key is %s, key pointer is %p\n", test, sizeof(test), test->key, test->key);
}
/* talloc:  make a tnode */
struct tnode *talloc(void)
{
  return (struct tnode *) malloc(sizeof(struct tnode));
}
