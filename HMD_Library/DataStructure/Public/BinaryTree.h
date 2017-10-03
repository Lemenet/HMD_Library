#pragma once

namespace HMDL
{

	/* 二叉树节点
	 * 存储二叉树节点的信息
	 * 在BinaryTree中被引用 */
	class BinaryTreeNode
	{

		//////////////////////////////////////////////////////////////////////////
		// 二叉树的私有成员，按照父节点，左子，右子的顺序排列
	private:
		BinaryTreeNode* Parent;
		BinaryTreeNode* LeftChild;
		BinaryTreeNode* RightCild;
		void* Data;

		// 默认构造函数
		BinaryTreeNode();


	};






	/* 二叉树数据结构
	 * 包含数据指针，父节点指针和左右子节点指针 */
	class BinaryTree
	{
		/* 枚举二叉树的遍历方式
		 * Front,		//先序遍历
		 * Middle,		//中序遍历
		 * Tail,		//后序遍历*/
		enum class EAccessType : unsigned short int
		{
			Front,		//先序遍历
			Middle,		//中序遍历
			Tail,		//后序遍历
		};



		// 成员属性
	private:

		// 根节点
		BinaryTreeNode* Root;

		// 二叉树的深度
		unsigned int Depth;



		//////////////////////////////////////////////////////////////////////////
		// 类的接口函数
	public:

		// 默认构造函数
		BinaryTree() = default;

		// 获取二叉树深度
		unsigned int Depth() { return Depth; }

		// 插入新节点
		virtual bool InsertNode(BinaryTreeNode* InNode);

	};

	/* 
	 * 将BinaryTree缩写为Tree
	 * Using写法，以前没用过
	 * 之前用的都是typedef */
	using Tree = BinaryTree;

}