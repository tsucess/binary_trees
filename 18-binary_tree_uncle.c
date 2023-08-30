#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);

#include "binary_trees.h"

/**
 * sibling - find the sibling of a node
 *
 * @node: node
 * Return: pointer to the sibling node
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}

/**
 * binary_tree_uncle - find the uncle of a node
 *
 * @node: node
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (sibling(node->parent));
}
