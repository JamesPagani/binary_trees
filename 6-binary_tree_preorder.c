#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes through the tree in Pre-Order traversal
 * @tree: Root of the binary tree
 * @func: Function to use in each node
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || func != NULL)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
