#include "binary_trees.h"
/**
 * binary_tree_inorder - Goes through the tree in In-Order traversal
 * @tree: Root of the binary tree
 * @func: Function to use in each node
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
