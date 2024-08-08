#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check if he is perfect.
 * Return: 1 if it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = depth_finder(tree);

	if (tree == NULL)
		return (0);
	return (leaf_checker(tree, depth, 0));
}

/**
 * depth_finder - find the depth oh the leftmost leaf
 * @tree: pointer to the root off the tree
 * Return: depth of leftmost leaf
 */
int depth_finder(const binary_tree_t *tree)
{
	int depth = 0;
	const binary_tree_t *current = tree;

	while (current->left != NULL)
	{
		depth++;
		current = current->left;
	}
	return (depth);
}

/**
 * leaf_checker - check if each leaf is at
 * the same level of depth as leftmost one
 * @tree: A pointer to the root node of the tree
 * @depth: depth of leftmost leaf
 * @level: current depth level
 * Return: 1 if it is perfect, 0 otherwise
 */
int leaf_checker(const binary_tree_t *tree, int depth, int level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);
	return (leaf_checker(tree->left, depth, level + 1) &&
			leaf_checker(tree->right, depth, level + 1));
}
