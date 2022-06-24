#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data)
{
  struct node *node = (struct node *)malloc(sizeof(struct node));

  // Masukan data ke node (angka)
  node->data = data;

  // Init left dan right sebagai children yang mempunyai data / NULL
  node->left = NULL;
  node->right = NULL;
  return (node);
};

// Akan mengeksekusi root > left child > right child
void execPreOrder(struct node *node)
{
  if (node == NULL)
    return;

  printf("%d", node->data);

  execPreOrder(node->left);
  execPreOrder(node->right);
}

// Akan mengeksekusi left child > root > right child
void execInOrder(struct node *node)
{
  if (node == NULL)
    return;

  execInOrder(node->left);

  printf("%d", node->data);

  execInOrder(node->right);
}

// Akan mengeksekusi left child > right child > root
void execPostOrder(struct node *node)
{
  if (node == NULL)
    return;

  execPostOrder(node->left);
  execPostOrder(node->right);

  printf("%d", node->data);
}

void main()
{
  // Membuat root dari tree
  struct node *root = newNode(1);

  // Membuat children dari root di kiri (2)
  root->left = newNode(2);

  // Membuat children dari root di kanan (3)
  root->right = newNode(3);

  // Membuat children dari children kiri (2) dan di isi dengan 4 di kiri
  root->left->left = newNode(4);

  // Membuat children dari children kiri (2) dan di isi dengan 5 di kanan
  root->left->right = newNode(5);

  printf("\n Pre Order: \n");
  execPreOrder(root); // akan mengeksekusi 1 2 4 5 3

  printf("\n In Order: \n");
  execInOrder(root); // akan mengekekusi 4 1 5 2 3

  printf("\n Post Order: \n");
  execPostOrder(root); // akan mengeksekusi 4 5 2 3 1
}