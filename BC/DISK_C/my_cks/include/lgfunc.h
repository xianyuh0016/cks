#ifndef _LGFUNC_H_
#define _LGFUNC_H_

#define U_LIST_INIT_SIZE 10 //线性表存储空间的初始分配量
#define U_LISTINCEREMENT 1  //线性表存储空间的分配增量

typedef struct USER
{
	char name[12];//账户 
	char code[12];//密码
	char type;//用户类型 1为消费者，2为商家，3为骑手
	char number[12];//手机号
	int community; //地址 1东区 2西区 3南区 4紫菘 5韵苑
	int building;//楼栋号，此项只有商家用到
	int state;//判断用户是否初始化，为index，代表超市/食堂编号,未绑定为-1,0为超市,1-17为食堂编号 若为骑手，state=0为全职，state=1为专职
	int market_index;//超市编号（1，2，3）此项只有商家用到
	int pos;//用户在列表中位置
	int index; //用户住址索引，此项只有消费者用到
	float account; //账户余额，此项只有骑手用到
	int ocp; //0为全职骑手，1为兼职骑手，此项只有骑手用到
}USER;

typedef struct UserList
{
	struct USER* elem;    //存储空间基址
	short length;  //当前长度，改为 short
	short listsize;  //当前存储空间容量，改为 short
}UserList;//用户线性表 


/*建立一个空表*/
void InitUList(UserList*UL);

/*在线性表UL的末尾插入新的元素e*/
void UListInsert(UserList*UL,struct USER e);

/*删除元素*/
void UListDelete(UserList*L,int i);


/*若线性表L存在，销毁线性表*/
void DestroyUList(UserList*UL);	

/*返回元素e在线性表中的位置*/
int Userposition(UserList UL,USER e);

//显示光标
void show_gb(int x,int y);
//得到显示信息
void input_mode(char *name,char *code,char *judge,int bar_x1,int bar_y1,int bar_x2,int bar_y2,int mode,int state);
//保存用户信息
int save_user(USER temp);

void ReadAllUser(UserList *UL);

void UpdataUser(USER user);

int Check_info(UserList UL, char name[12], char code[12]);

#endif