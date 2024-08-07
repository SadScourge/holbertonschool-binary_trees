#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the given node is a leaf
 * @node: pointer to the node
 * Return: 1 if the node is a leaf, 0 otherwise or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
