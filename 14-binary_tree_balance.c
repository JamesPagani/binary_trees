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
 * calc_depth - Calculates the depth of a binary tree
 * @tree: Binary tree to measure
 * @depth: Depth of the tree or sub-tree
 * Return: @depth
 */

size_t calc_depth(const binary_tree_t *tree, size_t depth)
{
	size_t left_d = depth;
	size_t right_d = depth;

	if (!(binary_tree_is_leaf(tree)))
	{
		if (tree->left)
			left_d = calc_depth(tree->left, depth + 1);
		if (tree->right)
			right_d = calc_depth(tree->right, depth + 1);
		if (left_d > right_d)
			return (left_d);
		else
			return (right_d);
	}
	return (depth);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Binary tree to measure
 * Description: Checks the distance (in nodes) from @tree to the deepest node
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (calc_depth(tree, 0));
}

/**
 * binary_tree_balance - Measures the balance factor of a tree
 * @tree: Binary tree to measure
 * Description: Checks how balanced a tree is. A positive number means the tree
 * is left balanced (left side is higher than right side), a negative number
 * means the tree is right balanced (right side is higher than left side), zero
 * menas the tree is balanced (both sides have the same height).
 * Return: Balance factor of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	return (left_height - right_height);
}
