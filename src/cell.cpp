#include "cell.h"

cell::cell()
{

}

cell::~cell()
{
    //dtor
}

cell::get_col()
{
    return this.col;
}

cell::get_row()
{
    return this.row;
}

cell::get_des()
{
    return this.density;
}

cell::set_col(int c){
    this.col=c;
}

cell::set_row(int r)
{
    this.row=r;
}

cell::set_des(int d){
    this.density=d;
}

cell::calc_des(){
    int j=0
    int i=0
    int count_o=0;
    int count_v=0;
    int count=0;
    int index=0;
    int s=this.cell_b.size();
    while(index<=s){
        for(i=0;i<=this.row;i++){
            if(cell[i][index]){
                count_o++;
            }else{
                break;
            }
        }
        for(j=;j<=this.col;j++){
            if(cell[index][j]){
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
        this.set_des(count/(s*2));
    }
}
