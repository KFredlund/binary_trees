#include "binary_trees.h"
binary_tree_t *create_node(int value);
/**
* binary_tree_node - A function that creates a binary tree node
*
* @parent: parent node of new node
* @value: value of new node
* Return: pointer to a new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = create_node(value);
	binary_tree_t *current;

	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		parent = new_node;
	else
	{
		current = parent;
		while (1)
		{
			if (parent->n > value)
			{
				current = current->left;
				if (current == NULL)
				{
					parent->left = new_node;
					return (new_node);
				}
			}
			else
			{
				current = current->right;
				if (current == NULL)
				{
					parent->right = new_node;
					return (new_node);
				}
			}
		}
	}	
	return (new_node);
}
/**
* create_node - A helper function that creates a node
* @value: value of new node
*
* Return: New node
*/
binary_tree_t *create_node(int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}