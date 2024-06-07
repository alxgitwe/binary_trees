#include "binary_trees.h"

/**
 * binary_tree_height - function
 * @tree: tree
 * Return: return
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((i > y) ? i : y);
	}
}
