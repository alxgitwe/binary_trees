#include "binary_trees.h"
/**
 * binary_tree_insert_left - function
 * @parent: parent
 * @value: value
 * Return: return
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nde;

	if (parent == NULL)
	{
		return (NULL);
	}

	nde = binary_tree_node(parent, value);
	if (nde == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		nde->left = parent->left;
		parent->left->parent = nde;
	}
	parent->left = nde;
	return (nde);
}
