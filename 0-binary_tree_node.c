#include "binary_trees.h"

/**
 * binary_tree_node function
 * @parent: parent
 * @value: Value
 * Return: return
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nde;

	nde = malloc(sizeof(binary_tree_t));
	if (nde == NULL)
	{
		return (NULL);
	}
	nde->n = value;
	nde->parent = parent;
	nde->left = NULL;
	nde->right = NULL;
	return (nde);
}
