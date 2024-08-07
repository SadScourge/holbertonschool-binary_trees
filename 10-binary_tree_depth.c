#include "binary_trees.h"

/**
 * binary_tree_depth - aa
 * @tree: aaa
 * Return: aaa
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;
	const binary_tree_t *current = tree;

	while (current && current->parent)
	{
		current = current->parent;
		count++;
	}
	return (count);
}
