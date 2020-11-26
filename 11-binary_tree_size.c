#include "binary_trees.h"

/**
 * binary_tree_size - for holbertonschool
 * @tree: varr
 * Return: 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);
else
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
