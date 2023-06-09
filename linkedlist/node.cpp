
// well create a node class in which value aur address dono store hoga
class node{
    public:
    int data;
    node *next;
    //we'll be making a constructor(agar kisi ko is class ka object banana hoga user has to pass the data)
    node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};