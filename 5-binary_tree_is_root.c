#include "binary_trees.h"

/**
 * binary_tree_preorder - pass through a binary tree using pre-order traversal.
 * @tree: ptr param to the root node of the tree to traverse.
 * @func: ptr to a function param to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
