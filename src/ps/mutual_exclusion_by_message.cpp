/* program mutualexclusion */
/* const int n = number of process */
mailbox box;
void P(int i){
  message msg;
  while (true) {
    receive (box, msg);
  /* critical section */;
    send (box, msg);
  /* remainder */;
  }
}
void main()
{
  send(box, null);
  cobegin{P(1); P(2);… ; P(n);}
}
