#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string playeroneN, playertwoN, p1bet, p2bet, p1bet2, p2bet2, p1bet3, p2bet3;

	string winner1 = "is the winner";
	string winner2 = "is the winner";
	//box
	cout<<"                                             _______________________"<<endl;
	cout<<"                                                                    "<<endl;
	cout<<"                                             | WELCOME TO JAKENPOI |"<<endl;
	cout<<"                                             _______________________"<<endl;
	cout<<"                                                                    "<<endl;
	cout<<"                                             |     p = paper       |"<<endl;
	cout<<"                                             |     r = Rock        |"<<endl;
	cout<<"                                             |     s = Scissors    |"<<endl;
	cout<<"                                             _______________________"<<endl;
	cout<<endl<<endl;
	
	//players
	cout<<"Enter player one name: ";
	cin>>playeroneN;
	cout<<"Enter player two name: ";
	cin>>playertwoN;
	cout<<endl<<endl;
	
	//roundone
	cout<<"_____ROUND ONE______"<<endl;
	cout<<"Enter "<<playeroneN<<"'s bet: ";
	cin>>p1bet;
	cout<<"Enter "<<playertwoN<<"'s bet: ";
	cin>>p2bet;
	cout<<"_____ROUND ONE______"<<endl<<endl;
	
	cout<<"_____ROUND TWO______"<<endl;
	cout<<"Enter "<<playeroneN<<"'s bet: ";
	cin>>p1bet2;
	cout<<"Enter "<<playertwoN<<"'s bet: ";
	cin>>p2bet2;
	cout<<"_____ROUND TWO______"<<endl<<endl;

	cout<<"____ROUND THREE_____"<<endl;
	cout<<"Enter "<<playeroneN<<"'s bet: ";
	cin>>p1bet3;
	cout<<"Enter "<<playertwoN<<"'s bet: ";
	cin>>p2bet3;
	cout<<"____ROUND THREE_____"<<endl<<endl;
	
	int r1p1pts = 0;
	int r2p1pts = 0;
	int r3p1pts = 0;
	int r1p2pts = 0;
	int r2p2pts = 0;
	int r3p2pts = 0;
	int ties1 = 0;
	int ties2 = 0;

	//roundone
	if (p1bet == "p"){
		if (p2bet == "r"){
		r1p1pts++;
	}
		else if (p2bet == "s"){
			r1p2pts++;
	}
	}
	else if (p1bet == "r"){
		if (p2bet == "s"){
		r1p1pts++;		
	}

		}
		else if (p1bet == "s"){
			if (p2bet == "p")
			r1p1pts++;
			else if (p2bet == "r")
			r1p2pts++;
		}
		else {ties1++;
		ties2++;
		}
		
	//roundtwo
	if (p1bet2 == "p"){
		if (p2bet2 == "r"){
		r2p1pts++;
	}
		else if (p2bet2 == "s"){
			r2p2pts++;
	}
	}
	else if (p1bet2 == "r"){
		if (p2bet2 == "s"){
		r2p1pts++;		
	}
	else if (p2bet2 == "p"){
		r2p2pts++;
	}
		}
		else if (p1bet2 == "s"){
			if (p2bet2 == "p")
			r2p1pts++;
			else if (p2bet2 == "r")
			r2p2pts++;
		}
		else {ties1++;
		ties2++;
		}
		
	//roundthree
	if (p1bet3 == "p"){
		if (p2bet3 == "r"){
		r3p1pts++;
	}
		else if (p2bet3 == "s"){
			r3p2pts++;
	}
	}
	else if (p1bet3 == "r"){
		if (p2bet3 == "s"){
		r3p1pts++;		
	}
	else if (p2bet3 == "p"){
		r3p2pts++;
	}
		}
		else if (p1bet3 == "s"){
			if (p2bet3 == "p")
			r3p1pts++;
			else if (p2bet3 == "r")
			r3p2pts++;
		}
		else {ties1++;
		ties2++;
		}
	
	// round results

	//roundone
	if (p1bet == "r" && p2bet == "s") {cout<<"Round one winner is "<<playeroneN<<"."<<endl;
	}
	else if (p1bet == "r" && p2bet == "p"){
		cout<<"Round one winner is "<<playertwoN<<"."<<endl;
	}
	else if (p1bet == "p" && p2bet == "r"){
		cout<<"Round one winner is "<<playeroneN<<"."<<endl;
	}
	else if (p1bet == "p" && p2bet == "s"){
		cout<<"Round one winner is "<<playertwoN<<"."<<endl;
	}
	else if (p1bet == "s" && p2bet == "r"){
	cout<<"Round one winner is "<<playertwoN<<"."<<endl;}
	else if (p1bet == "s" && p2bet == "p"){
		cout<<"Round one winner is "<<playeroneN<<"."<<endl;
	}
	else if(p1bet == p2bet){
		cout<<"Round one match is tied."<<endl;
	}
	else {
	cout<<"Round one match is void."<<endl;}
	//roundtwo
	if (p1bet2 == "r" && p2bet2 == "s") {cout<<"Round two winner is "<<playeroneN<<"."<<endl;
	}
	else if (p1bet2 == "r" && p2bet2 == "p"){
		cout<<"Round two winner is "<<playertwoN<<"."<<endl;
	}
	else if (p1bet2 == "p" && p2bet2 == "r"){
		cout<<"Round two winner is "<<playeroneN<<"."<<endl;
	}
	else if (p1bet2 == "p" && p2bet2 == "s"){
		cout<<"Round two winner is "<<playertwoN<<"."<<endl;
	}
	else if (p1bet2 == "s" && p2bet2 == "r"){
	cout<<"Round two winner is "<<playertwoN<<"."<<endl;}
	else if (p1bet2 == "s" && p2bet2 == "p"){
		cout<<"Round two winner is "<<playeroneN<<"."<<endl;
	}
	else if(p1bet2 == p2bet2){
		cout<<"Round two match is tied."<<endl;
	}
	else {
		cout<<"Round two winner is void."<<endl;
	}
	//roundone
	if (p1bet3 == "r" && p2bet3 == "s") {cout<<"Round three winner is "<<playeroneN<<"."<<endl;
	}
	else if (p1bet3 == "r" && p2bet3 == "p"){
		cout<<"Round three winner is "<<playertwoN<<"."<<endl;
	}
	else if (p1bet3 == "p" && p2bet3 == "r"){
		cout<<"Round three winner is "<<playeroneN<<"."<<endl;
	}
	else if (p1bet3 == "p" && p2bet3 == "s"){
		cout<<"Round three winner is "<<playertwoN<<"."<<endl;
	}
	else if (p1bet3 == "s" && p2bet3 == "r"){
	cout<<"Round three winner is "<<playertwoN<<"."<<endl;}
	else if (p1bet3 == "s" && p2bet3 == "p"){
		cout<<"Round three winner is "<<playeroneN<<"."<<endl;
	}
	else if(p1bet3 == p2bet3){
		cout<<"Round three match is tied."<<endl;
	}
	else cout<<"Round three match is void."<<endl;
	
	float points1 = r1p1pts + r2p1pts + r3p1pts;
	float points2 = r2p2pts + r2p2pts + r3p2pts;
	cout<<endl<<endl;
	cout<<"The total points of "<<playeroneN<<" is "<<points1<<"."<<endl;
	cout<<"The total points of "<<playertwoN<<" is "<<points2<<"."<<endl<<endl<<endl;
	cout<<ties1;
	//winning probability
	float winp1 = (points1+(ties1/2)) / 3*100;
	float winp2 = (points2+(ties2/2))/ 3*100;
	cout<<"The winning probability of "<<playeroneN<<" is "<<winp1<<"%."<<endl;
	cout<<"The winning probability of "<<playertwoN<<" is "<<winp2<<"%."<<endl;
	
	cout<<endl<<endl;
	cout<<"hehe coders";
	cout<<endl;
	
    system ("pause");
	return 0;
	}
	

	
	


