#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Entry point
* @parent : varr
* @value : var
* Return: Always 0 (Success)
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;
if (!parent)
return (NULL);
newnode = malloc(sizeof(binary_tree_t));
if (!newnode)
return (NULL);
newnode->n = value;
newnode->parent = parent;
newnode->left = parent->left;
newnode->right = NULL;
parent->left = newnode;
if (newnode->left)
newnode->left->parent = newnode;
return (newnode);
}
