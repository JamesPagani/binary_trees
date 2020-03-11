#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a new left-child
 * @parent: Parent of the new left-child node
 * @value: Content of the new node
 * Return: Pointer to the new node; NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = parent->left;
	node->parent = parent;
	parent->left = node;
	if (node->left != NULL)
		node->left->parent = node;

	return (node);
}
