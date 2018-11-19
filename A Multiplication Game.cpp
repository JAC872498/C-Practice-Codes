/*PG 143 of http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
Stan and Ollie play the game of multiplication by multiplying an integer p by one of the numbers 2 to 9. 
Stan always starts with p=1, does his multiplication, then Ollie multiplies the number, then Stan, and so on.
Before a game starts, they draw an integer 1<n<4,294,967,295 and the winner is whoever reaches p≥n first.
*/

int main(){
  int p=1,n=rnd();
  bool turn=true;//true=Stan, false=Ollie
  while(p<n){
    if(turn){//This assumses that Stan always gets a perfect 9 and Ollie always gets the worse 2
      p*=9;//Stan's turn
    }else{
      p*=2;//Ollie's turn
    }
    turn=!turn;
  }
  if(!turn){//Because the turn changes at the end, winner will alwawys end his turn with a winning p
    std::cout<<"Ollie wins!";
  }else{
    std::cout<<"Stan wins!";
  }
  return(0);
}
