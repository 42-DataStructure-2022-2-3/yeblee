#ifndef _BIN_TREE_
#define _BIN_TREE_
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct BinTreeNodeType
{
	char data;
	int visited; /* 0 : not visited, 1 : visited */
	struct BinTreeNodeType* pLeftChild;
	struct BinTreeNodeType* pRightChild;
} BinTreeNode;

typedef struct BinTreeType
{
	struct BinTreeNodeType* pRootNode;
} BinTree;
BinTree* makeBinTree(BinTreeNode rootNode);
BinTreeNode* makeBinTreeNode(char data, int visited);
BinTreeNode* getRootNodeBT(BinTree* pBinTree);
BinTreeNode* insertLeftChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* insertRightChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* getLeftChildNodeBT(BinTreeNode* pNode);
BinTreeNode* getRightChildNodeBT(BinTreeNode* pNode);
void deleteBinTree(BinTree* pBinTree);
void deleteBinTreeNode(BinTreeNode* pNode);
#endif

#ifndef _COMMON_TREE_DEF_
#define _COMMON_TREE_DEF_
#define TRUE		1
#define FALSE		0
#endif