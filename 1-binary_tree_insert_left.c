#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the leftchild
 * @value: the value to store the new node
 * Return: a pointer to the created node, or NULL on failure
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	if (parent->left != NULL)
		newnode->left = parent->left;
	parent->left = newnode;
	return (newnode);
}
