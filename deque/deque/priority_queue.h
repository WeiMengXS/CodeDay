#pragma once
#include<iostream>
namespace bit
{
	template<class T, class Container = vector<T>>
	class priority_queue
	{
	public:
		void AdjustUp(size_t child)
		{
			size_t parnet = (child - 1) / 2;
			while (child>0)
			{
				if (_con[child] > _con[praent])
				{
					swap(_con[child], _con[parent]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}
		void AdjustDwon(size_t root)
		{
			size_t parent = root;
			size_t child = root * 2 + 1;
			while ()
			{
				if (child + 1 < _con.size() && _con.[child + 1] > _con[child])
				{
					++child;
				}
				if (_con[child] > _con[parent])
				{
					swap(_con.[child], _con[parent]);
					parent = child;
					child = parent * 2 + 1;

				}
				else
				{
					break;
				}
			}
		}
		void push(const T&x)
		{
			_con.push_back(x);
			AdjustUp(_con.size()-1);
		}
		void pop()
		{
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();
			AdjustDwon(0);
		}
		T& top()
		{
			return _con.frant();
		}
		size_t size()
		{
			return _con[0];
		}
		bool empty()
		{
			return _con.empty();
		}
	private:
		Container _con;
	};
	
	void test_priority()
	{
		bit::priority_queue<int> pq;
	
		pq.push(1);
		pq.push(2);
		pq.push(3);
		pq.push(4);
		while (!pq.empty())
		{
			cout << pq.top() << ' ';
			pq.pop();
			cout << endl;
		}
	}
}