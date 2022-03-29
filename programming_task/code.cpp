#include<iostream>
// #include<list>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct node
    {
        int data;
        struct node* next;
    };

class myList
    {
        public:

            static struct node* head;
            static struct node* last;
            static struct node* new_node;

        

        myList()
            {
                int n;
                cout << "Enter data\n" << endl;
                cin >>n;
                new_node=(struct node*)malloc(sizeof(struct node));
                if(head==NULL)
                    {
                        head=new_node;
                        last=new_node;
                    }
                    
                new_node->data=n;
            } 

         static void Insertbeg()
            {
                if(head==NULL)
                    {
                        head=new_node;
                        last=new_node;
                        head->next=NULL;
                    }
                else
                    {
                        new_node->next=head;
                        head=new_node;
                    }
       
            } 
        static void DeleteLast()
            {
                struct node *temp;
                temp=head;
                while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                temp->next=NULL;
                last=temp;
            }
        static void SwappTwo()
            {
                struct node *temp,*temp1;
                temp=head;
                while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                temp->next=head;
                last->next=head->next;

                temp1=head;
                head=last;
                last=temp1;



            }
        static void display()
            {
                struct node *temp;
                temp=head;
                while(temp!=NULL)
                    {
                        cout << temp->data << " ";
                        temp=temp->next;
                    }
            }

        

          
            
    };

struct node myList :: *head;
struct node myList :: *new_node;
struct node myList :: *last;

int main()
    {
        myList();
        // myList::Insertbeg();
        myList();
        myList::Insertbeg();
        myList::display();

    }