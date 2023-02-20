# include <stdio.h>
# include <stdlib.h>

int insertAtTheEnd();

struct node{
    int data;
    struct node * next;
};

// implimenting the linked list
int implimentLinkedList(){
    struct node * head = NULL, *headNode = NULL,*curruntNode = NULL, *newNode = NULL;
    int value = 0, n  = 0;

    printf("How many nodes should in your list : ");
    scanf("%d",&n);
    
    printf("Enter the Value of No: 1 node : ");
    scanf("%d",&value);
    
    headNode = (struct node*) malloc(sizeof(struct node));
    headNode -> data = value;
    headNode -> next = NULL;
    
    head = headNode;
    newNode = head;
    
    for(int i = 1; i < n ; i++){
        printf("Enter the Value of No: %d node : ",i+1);
        scanf("%d",&value);
    
        curruntNode = (struct node*) malloc(sizeof(struct node));
        curruntNode -> data = value;
        curruntNode -> next = NULL;
        
        newNode -> next = curruntNode;
        newNode = newNode-> next;
    }
    
    if( head == NULL){
        printf("Invalid!");
    }else{
        
        printf("Linked list before add the new node\n");
        while(head != NULL){
            printf("%d ",head->data);
            head=head->next;
        }
    }
    insertAtTheEnd(headNode,head);
    return 0;
}

// adding the node at the end
int insertAtTheEnd(struct node * headNode){
    
    struct node *temp, *newNode = NULL;
    temp = headNode;
    
    newNode  = (struct node *) malloc (sizeof(struct node));
    printf("\nEnter the value of node that insert to end : ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
    
    while(temp -> next != 0){
        temp = temp -> next;
    }
    temp -> next = newNode;
    printf("Linked list after adding new node at the end\n");
    temp = headNode;
    while(temp!=NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}
int main(){
    implimentLinkedList();
    return 0;
}
