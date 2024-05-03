#ifndef NODE_H
#define NODE_H


template <typename T>
class Node
{
    private:

        T datum;
        Node<T> *next;

    public:

        Node();
        Node(T data);
        ~Node();


};

#endif // NODE_H