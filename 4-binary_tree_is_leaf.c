#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if the given node is a leaf (has no child)
 * @node: Node to check
 * Return: 1 if @node is a leaf, 0 if otherwise or @node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
