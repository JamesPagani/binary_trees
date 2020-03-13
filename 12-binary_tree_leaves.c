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
 * binary_tree_leaves - Counts the amount of leaves in a binary tree
 * @tree: Binary tree
 * Return: Amount of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_l = 0;
	size_t right_l = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);
	left_l += binary_tree_leaves(tree->left);
	right_l += binary_tree_leaves(tree->right);
	return (left_l + right_l);
}
