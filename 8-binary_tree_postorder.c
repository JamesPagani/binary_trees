#include "binary_trees.h"
/**
 * binary_tree_postorder - Iterates the tree in Postorder traversal
 * @tree: Root of the binary tree
 * @func: Function to use in each node
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || func != NULL)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
