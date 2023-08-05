#include "binary_trees.h"
/**
 * binary_tree_insert_left - that inserts a node as the left-child
 * of another node
 * @parent : pointer to the parent node
 * @value : value of the new node
 * Return: pointer to the new node on success otherwise NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}
