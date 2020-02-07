#include "binary_trees.h"
/**
* binary_tree_is_root - A function that checks if a given node is a root
* @node: node to check
*
* Return: 1 or 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	while (node)
	{
		if (node->left != NULL || node->right != NULL)
			return (1);
		else
			return (0);
	}
	return (0);
}
