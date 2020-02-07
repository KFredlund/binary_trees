#include "binary_trees.h"
/**
* binary_tree_is_perfect - A funcion that checks if a binary tree is perfect
* @tree: tree to be checked
*
* Return: 0 if tree is null
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return ((binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right)));
	return (0);

}
