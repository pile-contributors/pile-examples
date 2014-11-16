#include "refcnt.h"

class RefCountWrapper : public RefCnt
{
public:
    RefCountWrapper() : RefCnt() {}
protected:
    ~RefCountWrapper() {}
};

int main (int argc, char *argv[])
{
    RefCountWrapper * rcw = new RefCountWrapper ();

    rcw->release();
    return 0;
}
