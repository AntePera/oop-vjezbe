template<typename T>
Stack<T>::Stack() :m_next(nullptr) {}

template<typename T>
Stack<T>::Stack(T element) : m_element(element), m_next(nullptr) {}

template<typename T>
int Stack<T>::push(T element)
{
	Stack* newStack = new Stack(element);
	newStack->m_next = m_next;
	m_next = newStack;

	return 0;
}

template<typename T>
T Stack<T>::pop()
{
	T data;
	Stack* temp = nullptr;

	if (isEmpty())
	{
		return 0;
	}

	data = m_next->m_element;

	temp = m_next->m_next;
	delete m_next;
	m_next = temp;

	return data;
}

template<typename T>
inline bool Stack<T>::isEmpty()
{
	return m_next ? false : true;
}