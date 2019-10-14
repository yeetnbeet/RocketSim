
#include <iostream>





class controller
{
    private:
    
    int activekey;
    // 0 indicates no key pressed

    void SetActiveKey(int activekey){this->activekey=activekey;}
    int GetActiveKey(){return this->activekey;}



    public:

    controller();
    ~controller();

    int getKey(controller);

}; 