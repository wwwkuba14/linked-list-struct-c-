#ifndef BOX_HPP
#define BOX_HPP


class Box
{
  public:
    Box(int value=0):
    value_(value),
    next_(nullptr){}

    void put();

    Box *get()
    {
      return next_;
    };
    void put(Box *p)
    {
      next_ = p;
    }

    int &getValue()
    {
      return value_;
    }

    const int &getValue() const
    {
      return value_;
    }

  private:
    int value_;
    Box *next_;
};

#endif
