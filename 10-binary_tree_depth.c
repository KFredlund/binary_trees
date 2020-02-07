#include "binary_trees.h"
/**
* binary_tree_depth - a function that measures the depth of a binary tree
* @tree: tree to be measured
*
* Return: 0 if tree is null, otherwise a measurement
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left)
		return (binary_tree_depth(tree->right) + 1);
	return (binary_tree_depth(tree->left) + 1);
}
