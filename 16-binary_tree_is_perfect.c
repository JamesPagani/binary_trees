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


/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Binary tree to inspect
 * Description: A FULL binary tree means that each of its nodes either has two
 * children or none at all.
 * Return: 1 tree is full, otherwise 0 (or if there's no tree at all)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_check = 1;
	int right_check = 1;

	if (tree == NULL)
		return (0);

	if ((tree->left && !(tree->right)) || (!(tree->left) && tree->right))
	{
		return (0);
	}

	if (tree->left != NULL)
		left_check = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		right_check = binary_tree_is_full(tree->right);

	return (left_check * right_check);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Binary tree to inspect
 * Description: A PERFECT binary tree has all the leaves on the same height and
 * with all its nodes having either 0 or 2 children (i.e: A balanced and full
 * tree)
 * Return: 1 if the tree is Perfect, 0 otherwise or if there isn't a tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
