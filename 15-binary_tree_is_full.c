#include "binary_trees.h"

/**
 * binary_tree_is_full - full 1 not full 0
 * @tree: var
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->left == 0 && tree->right == 0)
return (1);
if (tree->right && tree->left)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);
}
