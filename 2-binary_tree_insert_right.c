#include "binary_trees.h"
/**
 * binary_tree_insert_right - function
 * @parent: parent
 * @value: value
 * Return: return
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		nde->right = parent->right;
		parent->right->parent = nde;
	}
	parent->right = nde;
	return (nde);
}
