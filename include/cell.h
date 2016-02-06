#ifndef CELL_H
#define CELL_H


class cell
{
    public:
        cell();
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
        bool cell_b[][];

};

#endif // CELL_H
