#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
extern int empty(void);   /* test if list empty                */
extern void create(void); /* create list with tail = NULL      */
extern void move(void);   /* tail = tail-> link                */
extern void delete(void); /* delete head, tail remains same    */
extern void join(int);    /* join new node at end, tail changes*/
extern int leave(void);   /* leave at head, tail remains same  */
extern int gethead(void); /* get the head item in queue w/o changing queue */
extern int gettail(void);  /* get the tail item in queue w/o changing queue */
extern void printqueue(void); /* print out queue, for debugging purposes */


#endif // QUEUE_H_INCLUDED
