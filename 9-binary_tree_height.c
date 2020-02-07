#include "binary_trees.h"
/**
* binary_tree_height - a function that measures the height of a binary tree
* @tree: tree to be measured
*
* Return: 0 if tree is null, otherwise a measurement
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		return (left_h + 1);
	return (right_h + 1);
}
