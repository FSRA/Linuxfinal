#ifndef _MY_TREE_H
#define _MY_TREE_H

typedef	int ElemType;			//数据类型
typedef	int Status;			//返回值类型

//定义二叉树结构
typedef struct BiTNode
{
	ElemType data;					//数据域
	struct BiTNode *lChild, *rChlid;	//左右子树域
}BiTNode, *BiTree;

Status CreateBiTree(BiTree *T)
void TraverseBiTree(BiTree T)
void InOrderBiTree(BiTree T)
void PostOrderBiTree(BiTree T)
int TreeDeep(BiTree T)
int Leafcount(BiTree T,int num)

#endif //_MY_TREE_H
