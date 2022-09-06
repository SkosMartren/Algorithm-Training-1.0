```objectivec
//статья: https://acm.bsu.by/wiki/%D0%9F%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%BD%D0%B0%D1%8F_%D1%80%D0%B5%D0%B0%D0%BB%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F_%D0%B1%D0%B8%D0%BD%D0%B0%D1%80%D0%BD%D1%8B%D1%85_%D0%BF%D0%BE%D0%B8%D1%81%D0%BA%D0%BE%D0%B2%D1%8B%D1%85_%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D1%8C%D0%B5%D0%B2#C.2B.2B  
//код: https://www.cyberforum.ru/cpp-beginners/thread1607763.html  
// https://ru.stackoverflow.com/questions/474/%D0%93%D0%BB%D1%83%D0%B1%D0%B8%D0%BD%D0%B0-%D0%B8-%D0%B2%D1%8B%D1%81%D0%BE%D1%82%D0%B0-%D0%BF%D0%BE%D0%B4%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D0%B0  
//решение задач: https://github.com/topics/yandex-algorithm-trainings?l=c%2B%2B  
/*
https://leetcode.com/problems/balanced-binary-tree/discuss/198107/easy-to-understand-calculate-height-on  
https://leetcode.com/problems/maximum-depth-of-binary-tree/  
https://www.geeksforgeeks.org/binary-search-tree-data-structure/
*/
#include <iostream>

struct Node {
    Node* l, * r;
    char  x;
};
void Node_Add(Node*& p, char x);
void Node_Clear(Node* p);
int  Node_Height(const Node* p);

int main(void) {
    char s[] = "feacdfb";
    Node* tr = NULL;
    for (const char* i = &s[0]; *i; ++i)
        Node_Add(tr, *i);

    std::cout << "height: " << Node_Height(tr) << std::endl;
    Node_Clear(tr);
    return 0;
}

//вставка
void Node_Add(Node*& p, char x) { // Node*& == auto и узнать тип auto
    if (p == NULL) {
        p = new (std::nothrow) Node();
        if (p != NULL) {
            p->l = p->r = NULL;
            p->x = x;
        }
    }
    else if (x < p->x)
        Node_Add(p->l, x);
    else
        Node_Add(p->r, x);
}

//удаление всех
void Node_Clear(Node* p) {
    if (p != NULL) {
        if (p->l != NULL)
            Node_Clear(p->l);
        if (p->r != NULL)
            Node_Clear(p->r);
        delete p;
    }
}

//высота дерева
int Node_Height(const Node* p) {
    int l, r, h = 0;
    if (p != NULL) {
        l = Node_Height(p->l);
        r = Node_Height(p->r);
        h = ((l > r) ? l : r) + 1;
    }
    return h;
}
```
