#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Binary tree to measure
 * Description: Checks the distance (in nodes) from @tree to the deepest node
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h);
	return (right_h);
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
