class LRUCache 
{
public:
	LRUCache(int capacity) :_capacity(capacity)
	{

	}

	int GetValue(int key)
	{
		auto itr = find_if(_queue.begin(), _queue.end(),
			[&](const pair<int, int>& lPair)
			{
				return (lPair.first == key);
			});
		if (itr == _queue.end())
		{
			return -1;
		}
		return (*itr).second;
	}

	deque<pair<int, int>>::iterator getItr(int key)
	{
		return find_if(_queue.begin(), _queue.end(),
			[&](const pair<int, int>& lPair)
			{
				return (lPair.first == key);
			});
	}

	int get(int key)
	{
		if (GetValue(key) != -1)
		{
			auto backup = *getItr(key);
			_queue.erase(getItr(key));
			_queue.push_front(backup);
			return backup.second;
		}
		return -1;
	}

	void put(int key, int value)
	{
		if (_queue.size() < _capacity)
		{
			if (GetValue(key) == -1)
			{
				_queue.push_front(make_pair(key, value));
			}
		}
		else
		{
			if (GetValue(key) == -1)
			{
				_queue.push_front(make_pair(key, value));
				_queue.pop_back();
			}
		}
	}
	deque<pair<int, int>> _queue;
	int _capacity;
};