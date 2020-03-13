#include "binary_trees.h"
/**
 * binary_tree_depth - Finds the depth of a binary tree or sub-tree
 * @tree: Binary tree/sub-tree to measure
 * Return: Depth of the tree/sub-tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
        if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
