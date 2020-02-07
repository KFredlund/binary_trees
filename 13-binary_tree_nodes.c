#include "binary_trees.h"
/**
* binary_tree_nodes -  A function that counts the nodes with at least
* 1 child in a binary tree
* @tree: tree to be counted of
*
* Return: leaf count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;
		if (tree->left != NULL)
			count += binary_tree_nodes(tree->left);
		if (tree->right != NULL)
			count += binary_tree_nodes(tree->right);
	}
	return (count);
}
