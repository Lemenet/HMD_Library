#pragma once

namespace HMDL
{

	/* �������ڵ�
	 * �洢�������ڵ����Ϣ
	 * ��BinaryTree�б����� */
	class BinaryTreeNode
	{

		//////////////////////////////////////////////////////////////////////////
		// ��������˽�г�Ա�����ո��ڵ㣬���ӣ����ӵ�˳������
	private:
		BinaryTreeNode* Parent;
		BinaryTreeNode* LeftChild;
		BinaryTreeNode* RightCild;
		void* Data;

		// Ĭ�Ϲ��캯��
		BinaryTreeNode();


	};






	/* ���������ݽṹ
	 * ��������ָ�룬���ڵ�ָ��������ӽڵ�ָ�� */
	class BinaryTree
	{
		/* ö�ٶ������ı�����ʽ
		 * Front,		//�������
		 * Middle,		//�������
		 * Tail,		//�������*/
		enum class EAccessType : unsigned short int
		{
			Front,		//�������
			Middle,		//�������
			Tail,		//�������
		};



		// ��Ա����
	private:

		// ���ڵ�
		BinaryTreeNode* Root;

		// �����������
		unsigned int Depth;



		//////////////////////////////////////////////////////////////////////////
		// ��Ľӿں���
	public:

		// Ĭ�Ϲ��캯��
		BinaryTree() = default;

		// ��ȡ���������
		unsigned int Depth() { return Depth; }

		// �����½ڵ�
		virtual bool InsertNode(BinaryTreeNode* InNode);

	};

	/* 
	 * ��BinaryTree��дΪTree
	 * Usingд������ǰû�ù�
	 * ֮ǰ�õĶ���typedef */
	using Tree = BinaryTree;

}