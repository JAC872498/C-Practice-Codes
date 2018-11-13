/*PG 143 of http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
Stan and Ollie play the game of multiplication by multiplying an integerpby one ofthe numbers 2 to 9. 
Stan always starts with p=1, does his multiplication, then Olliemultiplies the number, then Stan, and so on.
Before a game starts, they draw an integer 1<n<4,294,967,295 and the winner is whoever reachesp≥nfirst.
*/

int p=1,n=rnd();
int turn=0;//0=Stan, 1=Ollie
