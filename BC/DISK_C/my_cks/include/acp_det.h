#ifndef __ACP_DET_H
#define __ACP_DET_H

void draw_order_detail_header(int type, int local_index,OrderList *OL, FoodList *FL, DeliverList *DL);
void draw_order_detail(int type,OrderList *OL, FoodList *FL, DeliverList *DL,
    int local_index, int page);
void show_order_detail(int local_index, int type, int user_pos) ;
#endif