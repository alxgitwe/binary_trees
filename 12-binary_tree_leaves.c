#include "binary_trees.h"
/**
 * binary_tree_leaves - function
 * @tree: tree
 * Return: return
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0, j = 0, k = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		j = binary_tree_leaves(tree->left);
		k = binary_tree_leaves(tree->right);
		i = j + k;
		return ((!j && !k) ? i + 1 : i + 0);
	}
}
