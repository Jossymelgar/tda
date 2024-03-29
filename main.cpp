#include <iostream>
#include <cstdlib>
#include "tdalist.h"
#include "varraylist.h" //Arreglos de tama�o variable
#include "farraylist.h" //Arreglos de tama�o fijo
#include "slinkedlist.h" //Lista Enlazada Sencilla
#include "linkedlist.h" //Lista Doblemente Enlazada
#include "dlcursorlist.h" //Cursor de Tama�o Fijo simulando lista doblemente enlazada
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctime>
clock_t inicio = clock();

#include "integer.h"

using namespace std;
void testTDA(TDAList*);

int main(int argc, char *argv[])
{

TDAList* list;

/*list = new VArrayList(10, 5);
testTDA(list);
delete list;
*/
/*
list = new FArrayList(25);
testTDA(list);
delete list;
*/
 /*
list = new SLinkedList();
testTDA(list);
delete list;
 */
/*   
list = new LinkedList();
testTDA(list);
delete list;
  */
   
list = new DLCursorList();
testTDA(list);
delete list;


    
    return 0;
}


void testTDA(TDAList* list){
// Insert 20 numbers
	srand(time(NULL));
	char n=' ';
for (int i=0; i<5000; i++){
	int num= rand()*11;
	int num1= rand()*11;
    list->insert(new Integer(num), num1);
	printf("%f\n",((double)clock()-inicio));
	
}
cout<<""<<endl;
/*
// Print list
for (int i=0; i<list->size(); i++)
cout << list->get(i)->toString() << endl;

// Remove three Elements
Object* t = NULL;
t = list->remove(0);
delete t;
t = list->remove(10);
delete t;
t = list->remove(5);
delete t;

// Print list
for (int i=0; i<list->size(); i++)
cout << list->get(i)->toString() << endl;

cout << "First = " << list->first() << endl;
cout << "Last = " << list->last() << endl;

// indexOf
for (int i=0; i<20; i++){
cout << "list->indexOf(" << i << ") = " << list->indexOf( new Integer(i) ) << endl;
}

list->clear();
cout << "Size = " << list->size() << endl;
*/

}