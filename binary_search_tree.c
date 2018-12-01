#include<stdio.h>

struct tnode
{
  int *key;
  int count;
  struct tnode *left; 
  struct tnode *right; 
};

  struct tnode *addtree(struct tnode *p, int *k)
  {
    if(p == NULL)
      {
	p = talloc();
	p->key = strdup(k);
	p->left = NULL;
	p->right = NULL;
	p->count = 1;
      }
    else if(k > p->key)
      p->right = addtree(p->right, k);
    else if(k < p->key)
      p->left = addtree(p->left, k);
    else
      p->count++;	    
    return p;
  }
int main
{
  struct tnode *root;
  int key;
  root = NULL;
  while(getnuber(key) != EOF)
    if(isdigit(key))
      root = addtree(root, key);
  treeprint(root);
  return 0;
}

struct tnode *talloc(void)
{
  return (struct tnode *) malloc(sizeof(struct tnode));
}
 int strdup(int *k)
{
  int *s
  s = (int *) malloc(strlen(k) + 1);
  if(s != NULL)
    strcpy(k, s);
  return k;
}
