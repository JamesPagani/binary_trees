#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Node to find its uncle
 * Return: @node's uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *mom;
	binary_tree_t *grandma;

	if (node == NULL)
		return (NULL);

	if (!(node->parent))
		return (NULL);
	if (!(node->parent->parent))
		return (NULL);

	mom = node->parent;
	grandma = mom->parent;
	if (grandma->left == mom)
		return (grandma->right);
	else if(grandma->right == mom)
		return (grandma->left);
	return (NULL);
}
