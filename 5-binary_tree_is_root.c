#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is the root of the tree
 * @node: Node to check
 * Return: 1 if @node is the root, 0 if otherwise or @node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
