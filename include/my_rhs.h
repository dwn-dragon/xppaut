#ifndef _my_rhs_h_
#define _my_rhs_h_

void extra(double *y__y, double t, int nod, int neq);
void set_fix_rhs(double t, double *y);
int my_rhs(double t, double *y, double *ydot, int neq);
void update_based_on_current(void);
void fix_only(void);
void rhs_only(double *y, double *ydot);

#endif
