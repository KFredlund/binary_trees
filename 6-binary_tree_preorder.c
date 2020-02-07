#include "binary_trees.h"
/**
* binary_tree_preorder - A function that goes through a binary
* tree using preorder traversal
* @tree: tree to be traversed
*
* Return: Never
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->left->n);
		func(tree->right->n);
	}
}
