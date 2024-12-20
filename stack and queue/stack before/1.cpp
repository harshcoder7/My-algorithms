//stack using array
class stackusingarray{
    int *data;
    int nextindex;


    public:

    stackusingarray(int totalsize)
    {
        data=new int[totalsize];
        nextindex=0;
    }

    //well make size function to return the number of elements presnt in my stack


    int size()
    {
       return nextindex;
    }

    bool isempty()
    {
        if(nextindex==0)
        {
            return true;
        }
        else{
            return false; 
        }

    }

     


};