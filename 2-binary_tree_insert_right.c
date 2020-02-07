#include "binary_trees.h"
/**
* binary_tree_insert_right - A function that inserts a binary tree node
* as the right child of another node
* @parent: parent node of new node
* @value: value of new node
* Return: pointer to a new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new_node;
	else
		temp->parent = parent;
		temp->n = parent->right->n;
		temp->right = NULL;
		temp->left = NULL;
		parent->right = new_node;
		new_node->right = temp;
		return (new_node);
}
