#include "binary_trees.h"
/**
* binary_tree_is_leaf - A function that checks if a
* node is a leaf
* @node: a pointer to a function
*
* Return: 1 if node is a leaf, or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	while (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
		else
			return (0);
	}
	return (0);
}
