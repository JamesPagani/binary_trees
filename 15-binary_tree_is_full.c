#include "binary_trees.h"
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
