#ifndef StaticArray_h
#define StaticArray_h

template <typename T, int CAP>
class StaticArray
{
  T value[CAP]; //T datatype CAP compasity
  T dummy;
    
public:
  StaticArray();
  int capacity() const;
  T operator[] (int) const; //getter
  T& operator[] (int); //setter
};

//constructor
template <typename T, int CAP>
StaticArray<T, CAP>::StaticArray()
{
  for(int i = 0; i < CAP; i++)
  {
    value[i] = T();
  }
}

//capacity getter
template <typename T, int CAP>
int StaticArray<T, CAP>::capacity() const
{
  return CAP;
}

//getter
template <typename T, int CAP>
T StaticArray<T, CAP>::operator[](int index) const
{
  if(index < 0 || index >= CAP)
  {
    return dummy;
  }
  return value[index];
}

//setter
template <typename T, int CAP>
T& StaticArray<T, CAP>::operator[](int index)
{
  if(index >= 0 && index < CAP)
  {
    return value[index];
  }
  return dummy;
}

#endif /* StaticArray_h */
