#include "binary_trees.h"
/**
 * binary_tree_is_full - function
 * @tree: tree
 * Return: return
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			i = binary_tree_is_full(tree->left);
			j = binary_tree_is_full(tree->right);
			if (i == 0 || j == 0)
			{
				return (0);
			}
			return (1);
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
}
