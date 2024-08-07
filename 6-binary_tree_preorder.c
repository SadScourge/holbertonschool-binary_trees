#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through the tree in pre-order traversal
 *	and execute the given function on each node with the node value as parameter
 * @tree: pointer to the root of the tree
 * @func: pointer to a function to call on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
