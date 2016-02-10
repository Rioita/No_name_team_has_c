#include "cell.h"

cell::cell(bool arr_cell[][MAX_COL])
{
    int i=0;
    int j=0;
    for(i; i<=MAX_S_CELL; i++){
            for(j; j<=MAX_S_CELL; j++){
                this->cell_b[j][i]=arr_cell[j][i];
            }

    }

}

cell::~cell()
{
    //dtor
}

int cell::get_col()
{
    return this->col;
}

int cell::get_row()
{
    return this->row;
}

int cell::get_des()
{
    return this->density;
}

void cell::set_col(int c){
    this->col=c;
}

void cell::set_row(int r)
{
    this->row=r;
}

void cell::set_des(float d){
    this->density=d;
}

void cell::calc_des(){
    int j=0;
    int i=0;
    int count_o=0;
    int count_v=0;
    int count=0;
    int index=0;
    int s=sizeof(cell_b)/sizeof(cell_b[0][0]);
    while(index<=s){
        for(i=0;i<=this->row;i++){
            if(cell_b[i][index]){
                count_o++;
            }else{
                break;
            }
        }
        for(j=0;j<=this->col;j++){
            if(cell_b[index][j]){
                count_v++;
            }else{
                break;
            }
        }
        index++;
        count=count+count_o+count_v;
        count_o=0;
        count_v=0;
    }
        this->set_des(count/(s*2));
}

