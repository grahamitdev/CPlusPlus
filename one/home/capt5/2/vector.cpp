template<class T>
class Vector
{
public:
    Vector()
        :_data(NULL)
        , _size(0)
        , _capacity(0)
    {}
    Vector(const Vector<T>& v)
    {
        _data = new T[v._capacity];
        if (v._size != 0)
        {
            for (size_t i = 0; i < v._size; ++i)
            {
                _data[i] = v._data[i];
            }
            _size = v._size;
            _capacity = v._capacity;
        }
    }
    Vector<T>& operator=(const Vector<T>& v)
    {
        if (this != &v)
        {
            Vector<T> tmp(v);
            swap(_data, tmp._data);
            _size = tmp._size;
            _capacity = tmp._capacity;
        }
        return *this;
    }
    ~Vector()
    {
        if (_data != NULL)
        {
            delete[] _data;
            _size = _capacity = 0;
            _data = NULL;
        }
    }

public:
    void PushBack(const T& data)
    {
        CheckCapacity();
        _data[_size++] = data;
    }
    void PopBack()
    {
        if (_size != 0)
        {
            if (--_size == 0)
                delete[] _data;
        }
    }
    void Erease(size_t pos)
    {
        assert(pos >= 0 && pos<_size && _size>0);
        size_t i = pos;
        while (i < _size-1)
        {
            _data[i] = _data[i+1];
            i++;
        }
        _size--;
    }
    T& Front()
    {
        return *_data;
    }
    void Insert(size_t pos, const T& data)
    {
        assert(pos >= 0 && pos <= _size);
        CheckCapacity();
        size_t i = _size;
        while(i > pos)
        {
            _data[i] = _data[i-1];
            --i;
        }
        _data[pos] = data;
        ++_size;
    }
    bool Empty()
    {
        if (_size == 0)
            return true;
        else
            return false;
    }
    void Display()
    {
        for (size_t i = 0; i < _size; ++i)
        {
            cout << _data[i] << " ";
        }
        cout << endl;
    }
protected:
    void CheckCapacity()
    {
        if (_size >= _capacity)
        {
            size_t NewCapacity = 2 * _capacity + 3;
            T* tmp = new T[NewCapacity];
            if (_data != NULL)
            {
                //memcpy(tmp, _data, sizeof(int)*_size);错误分析见下
                for (size_t i = 0; i < _size; ++i)
                {
                    tmp[i] = _data[i];
                }
                delete[] _data;
            }
            _data = tmp;
            _capacity = NewCapacity;
        }
    }
protected:
    T* _data;
    size_t _size;
    size_t _capacity;
};
