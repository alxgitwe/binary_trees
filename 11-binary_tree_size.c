#include "binary_trees.h"
/**
 * binary_tree_size - function
 * @tree: tree
 * Return: return
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0, j = 0, k = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		k = binary_tree_size(tree->left);
		j = binary_tree_size(tree->right);
		include = j + k + 1;
	}
	return (i);
}
