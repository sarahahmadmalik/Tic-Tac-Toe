#include <iostream>
#include<stdlib.h>
using namespace std;

//code by MAS Squad

char square[3][3]={{ '1', '2','3'}, {'4','5','6'},{'7','8','9'}};
char playagain;
int player = 1,i;
char mark,choice,MARK,mark2;
int start();
int checkwin();
void board();


//****************Game Starter***************//

int main()
    
{
  do{
  	    system("cls");
  	    cout << "\n\n\n\t\t\tTic Tac Toe";
        cout<<"\n\n\n\t\tPlayer 1: Choose one X  OR O =";
	    cin>>MARK;
	    cout<<"\n\n\n\t\tPlayer 2: Choose one X  OR O =";
	    cin>>mark2;

	    
	    if(MARK=='X' || MARK=='O' && mark2=='X' || mark2=='O'){

	    cout<<"\n\n\n\n\t\t  Player1: "<<MARK<<" and Player2: "<<mark2<<endl;
	    cout<<"\n\n\n\n\t\t\t Let's Start!"<<endl;
	    Sleep(3000);
	    system("cls");
	    start();
	   
	    
	}  else{
		cout<<"\n\n\n\tPlease choose one of the given choice :("<<endl;
		system("cls");
	}
		
			
		
	}while(MARK!='X' || MARK!='O');
	
	return 0;
 
}


//****************Main Game Fucntion*******************//


int start(){
	 do{	
	 
	
	do
	{  
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		
		mark=(player == 1) ? MARK : mark2;
		if (choice == '1' && square[0][0] == '1')
			square[0][0] = mark;
		else if (choice == '2' && square[0][1] == '2')
			square[0][1] = mark;
		else if (choice == '3' && square[0][2] == '3')
			square[0][2] = mark;
		else if (choice == '4' && square[1][0] == '4')
			square[1][0] = mark;
		else if (choice == '5' && square[1][1] == '5')
			square[1][1] = mark;
		else if (choice == '6' && square[1][2] == '6')
			square[1][2] = mark;
		else if (choice == '7' && square[2][0] == '7')
			square[2][0] = mark;
		else if (choice == '8' && square[2][1] == '8')
			square[2][1] = mark;
		else if (choice == '9' && square[2][2] == '9')
			square[2][2] = mark;
		else{
			cout<<"Invalid move ";
			Sleep(1000);	
			player--;
			}
		i=checkwin();     //keeps checking the result
		player++;
	}while(i==-1);
	player--;
	board();
	if(i==1)
		cout<<"==>\aPlayer "<<player<<" win "<<endl<<endl;
		
	else
		cout<<"==>\aGame draw"<<endl<<endl;
		
		
		cout<<"\tPress Y to play again :)   OR   press N to exit :(";
		cin>>playagain;
		
		//reseting the values
		
	square[0][0]='1';
	square[0][1]='2';
	square[0][2]='3';
	square[1][0]='4';
	square[1][1]='5';
	square[1][2]='6';
	square[2][0]='7';
	square[2][1]='8';
	square[2][2]='9';
	
	if(playagain=='n'|| playagain=='N'){
		exit(0);
	}
	
 //calling main() to ask for the choice of mark again
	
	main();
		
}while( playagain=='Y' || playagain=='y');
}



//**************determining result of the game*****************//



int checkwin()
{
	
	if (square[0][0] == square[0][1] && square[0][1] == square[0][2])
		return 1;
	else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])
		return 1;
	else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])
		return 1;
	else if (square[0][0] == square[1][0] && square[1][0]== square[2][0])
		return 1;
	else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])
		return 1;
	else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])
		return 1;
	else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
		return 1;
	else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
		return 1;
	else
		return -1;
}




//***************layout of the Board***************//



void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 ("<<MARK<<")  -  Player 2 ("<<mark2<<")" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[0][0] << "  |  " << square[0][1] << "  |  " << square[0][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1][0] << "  |  " << square[1][1] << "  |  " << square[1][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[2][0] << "  |  " << square[2][1] << "  |  " << square[2][2] << endl;
	cout << "     |     |     " << endl << endl;
	
	
}


