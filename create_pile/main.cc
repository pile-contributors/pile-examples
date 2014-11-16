#include "refcnt/refcnt.h"
#include <stdio.h>

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
    printf("ello peeps\n");
    rcw->release();
    return 0;
}
