/************************************************************************/
//
//	���ߣ����ε�
//
//	ʱ�䣺2017/10/03
//
//	��������������
//			
//			
/************************************************************************/
#pragma once

namespace hmdl
{

	/* ��������Ľڵ� */
	template<typename TDataType>
	class SingleListNode
	{
	public:
		TDataType* Data;
		SingleListNode* Next;

		SingleListNode() = default;
		SingleListNode(TDataType InData)
		{
			Data = new TDataType(InData);
			Next = nullptr;
		}

	};

	/* ˫������Ľڵ� */
	template<typename TDataType>
	class DoubleListNode
	{
	public:
		TDataType* Data;
		DoubleListNode* Prev;
		DoubleListNode* Next;

		DoubleListNode() = default;
		DoubleListNode(TDataType InData)
		{
			Data = new TDataType(InData);
			Next = nullptr;
		}
	};

	/* �������� */
	template<typename TDataType>
	class List
	{

	private:

		// ����ͷ���
		SingleListNode<TDataType>* Head;

		// ����β�ڵ�
		SingleListNode<TDataType>* Tail;

		//������
		unsigned int Length;

	public:

		List() = default;

		// ��β������½ڵ�
		void PushBack(SingleListNode<TDataType>* InNode)
		{
			Tail->Next = InNode;
			InNode->Next = nullptr;
			Tail = InNode;
			++Length;
		}


		void PushBack(TDataType InData)
		{
			auto NewNode = new SingleListNode<TDataType>(InData);
			Tail->Next = NewNode;
			NewNode->Next = nullptr;
			Tail = NewNode;
			++Length;
		}



	};




	/* ˫������ */
	template<typename TDataType>
	class DoubleList
	{
		// ����ͷ���
		DoubleListNode<TDataType>* Head;

		// ����β�ڵ�
		DoubleListNode<TDataType>* Tail;

		//������
		unsigned int Length;
	};
	
}



namespace hmdl
{
	class ListHelper
	{
		template<T>
		static CoutList(List<T> List)
		{

		}
	};
}