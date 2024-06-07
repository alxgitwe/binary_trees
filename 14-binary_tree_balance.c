#include "binary_trees.h"

/**
 * binary_tree_height_b - function
 * @tree: tree
 * Return: return
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			i = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			j = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((i > j) ? i : j);
	}
}

/**
 * binary_tree_balance - function
 * @tree: tree
 * Return: return
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int i = 0, j = 0, k = 0;

	if (tree)
	{
		j = ((int)binary_tree_height_b(tree->left));
		i = ((int)binary_tree_height_b(tree->right));
		k = j - i;
	}
	return (k);
}
