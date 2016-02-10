#ifndef OPEN_ANALIS_H
#define OPEN_ANALIS_H
#define MAX_COL2 1000
#include <vector>
#include "cell.h"

class open_analis
{
    public:
        open_analis(bool data[][MAX_COL2]);
        virtual ~open_analis();
        std::vector<cell> cell_divider();
    protected:
    private:
        bool matrix[][MAX_COL];
};

#endif // OPEN_ANALIS_H
