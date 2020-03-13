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

/**
 * binary_tree_nodes - Counts nodes with at least one child in the binary tree
 * @tree: Binary tree
 * Return: Amount of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_n = 0;
	size_t right_n = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (0);
	left_n += binary_tree_nodes(tree->left);
	right_n += binary_tree_nodes(tree->right);
	return (1 + left_n + right_n);
}
