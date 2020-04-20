#include<iostream>
using namespace std;

struct node { //define a struct to represent each node.
int data;//the data property of the struct.
node *next;//pointer to the next node which is a struct.
};

class listone{
	
	private :
		node *head;//declaring pointers to "head node" and "tail node".
		node *tail;
	public:
		listone(){
		head=NULL;//let the pointers initially point nowhere.
		tail=NULL;
		}
	void createnode(int value)
		{ 
		node *temp=new node;//create a pointer to new node.
		temp->data=value;//access the "data" property of the node and assign the new value.
		temp->next=NULL;//access the "next" property.
		if(head==NULL)//check if the head pointer is null(i.e) if the list is empty.
		{ head=temp;//if yes ,make the new node the head node.
		tail=temp;//make the new node the tail node.
		temp=NULL;//let the "temp" now be null.
		}
		else
		{ //to be used when there is an already existing head node and other nodes.
		tail->next=temp;//let the "next" property of the current tail point to the new node.
		tail=tail->next;//update the tail pointer to the new node added(make temp the new tail).
		}
		}
	void display()
	    {
		node *temp=new node; //create a temp node.
		temp=head;//make temp the head.
		while(temp!=NULL)//check if the temp pointer is not null.
		{ cout<<temp->data<<"\t"; //while that condition holds,display the data value. 
		temp=temp->next;//let temp move to the next node.
		}
		}
    void insert_first(int value) //inserts a value at the beginning.
    	{ 
		node *temp=new node; //create a  new node called "temp".
		temp->data=value; //assign the data value.
		temp->next=head;//let the new node point to the old head.
		head=temp;//make temp the new head.
        }
    void insert_end(int value)//inserts a node at the end.
    	{ 
		node *temp=new node;//create a new node.
		temp->data=value;//assign the data value.
		temp->next=NULL;//let the node point to null.
		tail->next=temp;//let the "next" of the previous tail point to the node.
		tail=temp;//make the new node the new tail.
        }
    void insert_any(int value,int pos)//inserts a node at any position.
    	{ 
		node *temp2=new node;//create two new nodes.
		node *temp=new node;
		temp2->data=value;//let one node hold the data.
		temp=head;//let the other hold the head.
		for (int i=1;i<pos-1;i++){//loop for finding the position to fix the new node.
		 temp= temp->next;	
			
		}
		
		temp2->next=temp->next;// copy the "next" of the "prev node found" to the next of the new node.
		temp->next=temp2;//let the "next" of the prev node point to the new node. 
		
        }
    void del_beg()
        {
    	if (head==NULL){//check if it is empty.
    		cout<<"Empty List";
    		
    	}else
    	{
    		node *temp=head;//place the head node in temp node.
    		head=head->next;//let the next node be the new head.
    		delete temp;//delete temp
    	}
        }
    void del_end()
    {
    	node *temp;//create two node pointers.
    	node *temp2;
    	if (head==NULL)//check if the list is empty.
    	{
    		cout<<"empty list";
    	
    	}
    	else
		if(head->next==NULL){//check if it is only one node in the list.
    			temp=head;//move the head to temp.
    			head=NULL;//make the pointer to the head null.
    			delete temp;//delete temp.
    		}
    	
    	else{
    		temp=head;//maove the head to temp.
    		while(temp->next!=NULL){//check if the next of temp is not null.
    			temp2=temp;//copy temp to temp2 to help in deletion.
    			temp=temp->next;//the next is now the new temp.
    			
    		}//at the end of the loop we find the tail.
    		temp2->next=NULL;//let the previous before the tail point to null.
    		delete temp;//delete the tail.
    	}
    	
    }
    
    void del_any(int pos ){
    	node *temp;//create two node  pointers.
    	node *temp2;
    	
		temp= head;//let one be the head.
        
    	for (int i=1;i<pos-1;i++)
    	{
    		temp= temp->next;//previous pointer before the one to be deleted is found.
    	}
    	temp2=temp->next;//place the node to be deleted(which is the next node after temp)in temp2.
    	temp->next=temp2->next;///copy the next of the node to be deleted to the next of the previous.
    	
    	delete temp2;//delete the node.
    	
    }
};

int main(){
	
	listone values;
	
	values.createnode(55);
	values.createnode(47);
	values.createnode(88);
	values.createnode(63);
	
	
	values.display();
	cout<<endl;
	
	
	values.insert_first(11);
	
	
	values.display();
	cout<<endl;
	
	values.insert_end(34);
	
	values.display();
	cout<<endl;
	
	values.insert_any(16,4);
	
	values.display();
	cout<<endl;
	
	values.del_beg();
	
	values.display();
	cout<<endl; 
	
	values.del_end();
	
	values.display();
	cout<<endl; 
	
	values.del_any(2);
	
	values.display();
	cout<<endl; 
	
	
	return 0;
	
	
	
	
	
}
