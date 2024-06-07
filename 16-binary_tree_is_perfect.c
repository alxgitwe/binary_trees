#include "binary_trees.h"
/**
 * tree_is_perfect - function
 * @tree: tree
 * Return: return
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree->left && tree->right)
	{
		i = 1 + tree_is_perfect(tree->left);
		j = 1 + tree_is_perfect(tree->right);
		if (j == i && j != 0 && i != 0)
			return (j);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - function
 * @tree: tree
 * Return: return
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = tree_is_perfect(tree);
		if (i != 0)
		{
			return (1);
		}
		return (0);
	}
}
