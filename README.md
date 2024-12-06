# Binary Tree Implementations

This repository contains a comprehensive set of C implementations for various binary tree operations,
including binary trees, binary search trees (BST), AVL trees, and heaps.

## File Overview

### Basic Binary Tree Operations

- `0-binary_tree_node.c`: Create a binary tree node
- `1-binary_tree_insert_left.c`: Insert a node as the left child
- `2-binary_tree_insert_right.c`: Insert a node as the right child
- `3-binary_tree_delete.c`: Delete an entire binary tree
- `4-binary_tree_is_leaf.c`: Check if a node is a leaf
- `5-binary_tree_is_root.c`: Check if a node is a root

### Tree Traversal

- `6-binary_tree_preorder.c`: Preorder traversal
- `7-binary_tree_inorder.c`: Inorder traversal
- `8-binary_tree_postorder.c`: Postorder traversal
- `101-binary_tree_levelorder.c`: Level-order traversal

### Tree Properties

- `9-binary_tree_height.c`: Calculate tree height
- `10-binary_tree_depth.c`: Calculate node depth
- `11-binary_tree_size.c`: Count total nodes
- `12-binary_tree_leaves.c`: Count leaf nodes
- `13-binary_tree_nodes.c`: Count nodes with at least one child
- `14-binary_tree_balance.c`: Check tree balance
- `15-binary_tree_is_full.c`: Check if tree is full
- `16-binary_tree_is_perfect.c`: Check if tree is perfect
- `17-binary_tree_sibling.c`: Find a node's sibling
- `18-binary_tree_uncle.c`: Find a node's uncle

### Advanced Tree Operations

- `100-binary_trees_ancestor.c`: Find lowest common ancestor

### Binary Search Tree (BST) Operations

- `110-binary_tree_is_bst.c`: Check if tree is a valid BST
- `111-bst_insert.c`: Insert into a BST
- `112-array_to_bst.c`: Create BST from array
- `113-bst_search.c`: Search in a BST
- `114-bst_remove.c`: Remove node from BST

### AVL Tree Operations

- `120-binary_tree_is_avl.c`: Check if tree is an AVL tree
- `121-avl_insert.c`: Insert into an AVL tree
- `122-array_to_avl.c`: Create AVL tree from array
- `123-avl_remove.c`: Remove node from AVL tree
- `124-sorted_array_to_avl.c`: Create AVL tree from sorted array

### Heap Operations

- `130-binary_tree_is_heap.c`: Check if tree is a heap
- `131-heap_insert.c`: Insert into a heap
- `132-array_to_heap.c`: Create heap from array
- `133-heap_extract.c`: Extract max/min from heap
- `134-heap_to_sorted_array.c`: Convert heap to sorted array

### Complexity Analysis

- `115-O`: Complexity analysis file
- `125-O`: Another complexity analysis file
- `135-O`: Additional complexity analysis file

## Header File

- `binary_trees.h`: Contains all function prototypes and necessary struct definitions

## Compilation

To compile these files, use gcc with the appropriate flags:

```bash
gcc -Wall -Wextra -Werror -pedantic <source_file.c> -o <output_executable>
```

## Dependencies

- Standard C library
- Compiler supporting C99 or later

## Contributing

Feel free to submit pull requests or open issues for any improvements or bug fixes.

## Author

Adedamola Lawal
