#include <stdio.h>
#include <stdlib.h>
typedef struct TNode
{
    int value;
    struct TNode *next;
} TNode;
TNode *first = NULL;
TNode *last = NULL;

void load_list(int m)
{
    TNode *p;
    while(m--)
    {
        //1. Cấp phát nhớ
        p = (TNode*)malloc(sizeof(TNode));

        //2. Sinh giá trị ngẫu nhiên
        scanf("%d", &p->value);

        //3. Thêm vào danh sách
        if(first == NULL)   //Phần tử đầu tiên
        {
            first = last = p;
        }
        else  //Không phải phần tử đầu tiên
        {
            last->next = p;
            last = p;
        }
        p->next = NULL;
    }
}

void print_list()
{
    TNode *p = first;
    while(p!=NULL)
    {
        //1. In giá trị
        printf("%d ", p->value);

        //2. Chuyển đến phần tử kế tiếp
        p = p->next;
    }
    printf("\n");
}
void insert_to_list(int a)
{
    //1.cấp phát nhớ
    TNode *node =(TNode*)malloc(sizeof(TNode));
    node->value = a;

    //2.chèn
    if(a<=first->value)
    {
        //thêm vào đầu
        node->next = first;
        first = node;
    }
    else if(a>=last->value)
    {
        //thêm vào cuối
        node->next = NULL;
        last ->next = node;
        last = node;
    }
    else
    {
        //thêm vào giữa
        ///tìm phần tử cần chèn vào sau
        TNode *p=first;
        while(p->next->value<a)
            p = p->next;
        ///thực hiện chèn ssau p
        node->next = p->next;
        p->next = node;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("d:\\input.txt","r", stdin);
#endif // ONLINE_JUDGE
    //1. đọc m và n
    int m, n;
    scanf("%d %d", &m, &n);
    //2.đọc danh sách
    load_list(m);

    int a;
    while(n--)
    {
        //đọc
        scanf("%d", &a);
        ///chèn
        insert_to_list(a);
    }
    //4 in ra danh sách
    print_list();
    return 0;
}
