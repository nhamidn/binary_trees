#include "binary_trees.h"
/**
* binary_tree_node - function creates a binary tree node
* @parent : pointer to the parent node
* @value : value of the new node
* Return: pointer to the new node on success otherwise NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
