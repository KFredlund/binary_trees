#include "binary_trees.h"
binary_tree_t *create_node(int value);
/**
* binary_tree_insert_left - A function that inserts a binary tree node
* as the left child of another node
* @parent: parent node of new node
* @value: value of new node
* Return: pointer to a new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right == NULL)
		parent->right = new_node;
	else
		parent->right->right = parent->right;
		parent->right = new_node;
		return (new_node);
}
