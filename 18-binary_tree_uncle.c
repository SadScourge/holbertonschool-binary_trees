#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: A pointer to the node to check if it has an uncle
 * Return: pointer to the uncle of the node or NULL if he don't have one
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		uncle = node->parent->parent->right;
	else
		uncle = node->parent->parent->left;
	if (!uncle)
		return (NULL);
	return (uncle);
}
