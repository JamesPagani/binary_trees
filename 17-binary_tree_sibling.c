#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Node to find its sibling
 * Return: @node's sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *mom;

	if (node == NULL)
		return (NULL);

	if (!(node->parent))
		return (NULL);

	mom = node->parent;
	if (mom->left == node)
	{
		return (mom->right);
	}
	else if (mom->right == node)
	{
		return (mom->left);
	}
	return (NULL);
}
