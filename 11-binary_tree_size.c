#include "binary_trees.h"
/**
 * binary_tree_size - Counts the amount of nodes in the binary tree/sub-tree
 * @tree: Binary tree/sub-tree to measure
 * Return: Amount of nodes in the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_s = 0;
	size_t right_s = 0;

	if (tree == NULL)
		return (0);

	left_s += binary_tree_size(tree->left);
	right_s += binary_tree_size(tree->right);
	return (1 + left_s + right_s);
}
