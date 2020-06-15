namespace cdr
{
	template<class T>
	struct __list_node
	{
		__list_node<T>* _prev;
		__list_node<T>* _next;
		T _data;
		__list_node(const T& data = T())
			:_prev = nullptr, _next = nullptr
	};
	template<class T>
	class list
	{
		typedef __list_node<T> node;
		public
	};
}