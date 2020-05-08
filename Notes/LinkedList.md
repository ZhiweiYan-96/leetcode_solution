# Linked List 

1. 旋转操作：先降链表连成环，而后找到新的位置断开连接。(rotate list)

   ![avatar](E:\cpp_workspaces\leetcode_solution\Figures\rotate_list.png)

   

作为一种通用的解法，形成环不一定是必要的，最核心的其实是使得原始链表的尾指针指向原始链表的头指针。