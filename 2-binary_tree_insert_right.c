#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a new right-child
 * @parent: Parent of the new right-child node
 * @value: Content of the new node
 * Return: Pointer to the new node; NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = parent->right;
	node->parent = parent;
	parent->right = node;
	if (node->right != NULL)
		node->right->parent = node;

	return (node);
}
