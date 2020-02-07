#include "binary_trees.h"
/**
* binary_tree_sibling - A function that finds the sibling of a node
* @node: node to find the sibling of
*
* Return: pointer to a sibling of a node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	while ((node->parent->right == node || (node->parent->right == NULL
			&& node->parent->left == node)))
	{
		if (node->parent == NULL || node->parent->parent == NULL)
			return (NULL);
		node = node->parent;
	}
	node = node->parent->right;
	if (node == NULL)
		return (NULL);
	if (node->left != NULL)
		node = node->left;
	else if (node->right != NULL)
		node = node->right;
	else
		return (binary_tree_sibling(node));
	return (binary_tree_sibling(node));
}
