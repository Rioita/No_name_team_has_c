#ifndef CELL_H
#define CELL_H
#define MAX_COL 100
#define MAX_S_CELL 8

class cell
{
    public:
        cell(bool arr_cell[][MAX_COL]);
        virtual ~cell();
        int get_row();
        int get_col();
        int get_des();
        void set_row(int r);
        void set_col(int c);
        void set_des(float d);
    protected:
        void calc_des();
    private:
        float density;
        int col;
        int row;
        bool cell_b[][MAX_COL];

};

#endif // CELL_H
