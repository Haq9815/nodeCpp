#include <iostream>

using namespace std;

// node
struct cll
{
    int data;
    cll *next;
};
    // function to create a new node
    void create_node(cll **head, int data)
    {
        cll *temp = new cll;
        temp->data = data;
        temp->next = NULL;
        if(*head == NULL)
        {
            *head = temp;
        }
        else
        {
            cll *p = *head;
            while(p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    // function to print the list
    void print_list(cll *head)
    {
        cll *p = head;
        while(p != NULL)
        {
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    }
    // function to connect two lists
    void connect_list(cll *head1, cll *head2)
    {
        cll *p = head1;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = head2;
    }

    int main()
    {
        cll *head1 = NULL;
        cll *head2 = NULL;
        create_node(&head1, 1);
        create_node(&head1, 2);
        create_node(&head1, 3);
        create_node(&head1, 4);
        create_node(&head1, 5);

        create_node(&head2, 6);
        create_node(&head2, 7);
        create_node(&head2, 8);
        create_node(&head2, 9);
        create_node(&head2, 10);
        print_list(head1);
        print_list(head2);
        connect_list(head1, head2);
        print_list(head1);
        return 0;
    }

