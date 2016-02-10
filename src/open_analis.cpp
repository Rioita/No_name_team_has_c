#include "open_analis.h"

open_analis::open_analis(bool data[][MAX_COL2])
{
    //ctor
    int i=0;
    int j=0;
    for(i; i<=MAX_S_CELL; i++){
            for(j; j<=MAX_S_CELL; j++){
                this->matrix[j][i]=data[j][i];
            }

    }
}

open_analis::~open_analis()
{
    //dtor
}

std::vector<cell> open_analis::cell_divider()
{

}

