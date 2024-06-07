#include "binary_trees.h"
/**
 * binary_tree_nodes - function
 * @tree: tree
 * Return: return
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  nde = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nde += ((tree->left || tree->right) ? 1 : 0);
		nde += binary_tree_nodes(tree->left);
		nde += binary_tree_nodes(tree->right);
		return (node);
	}
}
