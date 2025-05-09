#ifndef __ALL_FUNC_H__
#define __ALL_FUNC_H__

#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<bios.h>
#include<string.h>
#include<dos.h>
#include<math.h>
#include<time.h>


#include "mouse.h"
#include "SVGA.H"

#include "u_re.h"
#include "welcome.h"
#include "lgfunc.h"

#include "user.h"
#include "u_shop.h"
#include "u_take.h"
#include "u_deliv.h"
#include "u_cart.h"
#include "u_order.h"
#include "u_food.h"
#include "f_order.h"
#include "button.h"
#include "de_order.h"

#include "busi.h"
#include "bu_order.h"
#include "bu_det.h"

#include "rider.h"
#include "route.h"
#include "acp_or.h"
#include "m_act.h"
#include "HZK.h"
#include "shape.h"
#include "arrange.h"
#include "acp_det.h"
#include "m_acp.h"
#include "m_inf.h"
#include "m_hst.h"
#include "m_ac_de.h"
// extern int cur_orders1[4];
// extern int acp_count = 0;
// extern int total_cnt=0;
// extern int acp_count=0;
extern MOUSE mouse;

extern USER users;


extern Product products[84];
extern CartItem carts[84];
extern ShoppingCart cart;

extern Deliver delivers;

extern Food foods[12];
extern FoodCart food_carts[12];
extern ShoppingFood shopping_food;

extern Order orders;
extern Canteen canteen[17];

extern Node node[417];
extern Company companys[8];
extern Station stations[8];

extern Button button [79];
extern AcceptedOrder cur_orders[4];
extern AcceptedOrder hst_orders[10];
extern Num_of_Orders num_of_orders;
extern RouteState route_state;
#define white 0xFFFF
#define snow 0xFFDF
#define black 0x0000
#define deepblue 0x0235
#define lightblue 0x435c
#define skyblue 0xB71C
#define grey 0xC618
#define deepgrey 0x6B4D
#define lightred 0XF800
#define Red 0xF800
#define deepgrew 0XC618
#define lightgrew 0xDEFB
#define Green 0010
#define lightblue 0x435c
#endif

