#include "binary_trees.h"

/**
 * binary_tree_inorder - pass through a binary tree using in-order traversal.
 * @tree: ptr param to the root node of the tree to traverse.
 * @func: ptr to a function param to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
