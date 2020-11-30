// complete this program
const int  capacity = 100 ;/* buffering capacity  ; 1 = empty message */ ;
object buf[capacity];
mailbox<char, 100> mayproduce;
mailbox<char, 100> mayconsume;
void producer(){
    int in = 0; 
    object x;
    while(true){
        mayproduce.receive();
        x = produce();
        buf[in] = x;
        mayconsume.send(1);
    }
}
void consumer(){ 
    int out = 0;
    object x;
    while(true) {
        mayconsume.receive();
        x = buf[out]
        consume(x);
        mayproduce.send(1);
    } 
}
void main(){
  for (int i = 1; i <= capacity; i++) mayproduce.send(1);
  cobegin{producer(); consumer();}
}
