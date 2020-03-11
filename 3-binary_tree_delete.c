#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: The root of the whole tree
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (tree != NULL)
	{
		node = tree;
		if (node->left)
			binary_tree_delete(node->left);
		if (node->right)
			binary_tree_delete(node->right);
		free(node);
	}
}
