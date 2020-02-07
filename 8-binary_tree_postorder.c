#include "binary_trees.h"
/**
* binary_tree_postorder - a function that traverses a binary tree postorder
* @tree: tree to be traversed
* @func: pointer to a function to call for each node
*
* Return: Never
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->left->n);
		func(tree->right->n);
	}
}
