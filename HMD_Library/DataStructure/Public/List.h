/************************************************************************/
//
//	作者：黄梦迪
//
//	时间：2017/10/03
//
//	功能描述：链表
//			
//			
/************************************************************************/
#pragma once

namespace hmdl
{

	/* 单向链表的节点 */
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

	/* 双向链表的节点 */
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

	/* 单向链表 */
	template<typename TDataType>
	class List
	{

	private:

		// 链表头结点
		SingleListNode<TDataType>* Head;

		// 链表尾节点
		SingleListNode<TDataType>* Tail;

		//链表长度
		unsigned int Length;

	public:

		List() = default;

		// 在尾部添加新节点
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




	/* 双向链表 */
	template<typename TDataType>
	class DoubleList
	{
		// 链表头结点
		DoubleListNode<TDataType>* Head;

		// 链表尾节点
		DoubleListNode<TDataType>* Tail;

		//链表长度
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