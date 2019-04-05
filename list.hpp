#ifndef LIST_HPP
#define LIST_HPP

#include "box.hpp"

class List
{
public:
    List():
    first_(nullptr),
    last_(nullptr),
    size_(0)
    {}
    ~List(){
    Box *temp = first_;
    while(first_!=last_)
    {
        temp=first_->get();
        delete first_;
        first_ = temp;
    }
    }

    void push_front(int value);
    void push_back(int value);

    int size(){return size_;}

    int &operator[](int i);
private:

    int size_;
    Box *first_;
    Box *last_;

};
int &List::operator[](int i)
{
    if (i < size_)
    {
        int counter = 0;
        Box *temp = first_;

        while (counter < i)
        {
            temp = temp->get();
            counter++;
        }
        return temp->getValue();
    }
}

void List::push_front(int value)
{
    Box *temp=new Box(value);
    if(first_ == nullptr)
    {
        first_ = temp;
        last_ = temp;
    }
    else
    {   
        temp->put(first_);
        first_=temp;      
    }
    size_ ++;
}

void List::push_back(int value)
{
    Box *temp = new Box(value);
    if(size() > 0)
    {
        last_ ->put(temp);
        last_ = temp;
    }
    else
    {
        first_ = temp;
        last_ = temp;
    }
    size_++;
}

#endif
