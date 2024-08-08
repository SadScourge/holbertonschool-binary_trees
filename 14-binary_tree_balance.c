#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to check the BF
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree)
	{
		if (tree->left)
		{
			left = 1 + binary_tree_balance(tree->left);
		}
		else
		{
			left = 0;
		}

		if (tree->right)
		{
			right = 1 + binary_tree_balance(tree->right);
		}
		else
		{
			right = 0;
		}
	}
	return (right - left);
}
