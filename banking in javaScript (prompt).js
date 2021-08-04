var ch;
var name;
var age;
var id;
var depositO;
var deposit;
var withdraw;
var balance=0;
var attemptPin;
var pinO;
var pin;
function mainMenu(){
ch=window.prompt("1) Create Account\n2) Withdraw Money\n3) Deposit Money\n4) Check Account\n5) Exit\n");
if(ch==1){
	name=window.prompt("Enter your name");
	age=window.prompt("Enter your age");
	id=window.prompt("Enter your id number");
    pin=window.prompt("Set pin");
    pinO=window.prompt("Confirm your pin");
    if(pin!=pinO){
    	do{
    	pinO=window.prompt("Confirmed pin isn't matching the first\nConfirm your pin");
    }while(pin!=pinO);
    depositO=window.prompt("Successufully set your pin\nEnter your deposit");
	balance=parseInt(balance);
	depositO=parseInt(depositO);
	balance= balance + depositO;
    ch=window.prompt("Succesfully Opened Acount\nPress 98 to go to the Main Menu");
if(ch==98){
	mainMenu();
}else{
	do{
     ch=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
    }else{
    depositO=window.prompt("Enter your deposit");
	balance=parseInt(balance);
	depositO=parseInt(depositO);
	balance= balance + depositO;
    ch=window.prompt("Succesfully Opened Acount\nPress 98 to go to the Main Menu");
if(ch==98){
	mainMenu();
}else{
	do{
     ch=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
}
}
else if(ch==2){
	withdraw=window.prompt("Enter amount you want to Withdraw");
	attemptPin=window.prompt("Enter your pin");
	if(attemptPin!=pin){
		do{
		 attemptPin=window.prompt("Invalid pin\nEnter your pin");
	}while(attemptPin!=pin);
	 if(withdraw>balance){
      ch=window.prompt("Transaction Failed due to insuficient balance in your account\nPress 98 to go to the Main Menu");
      if(ch==98){
	mainMenu();
}else{
	do{
     withdraw=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
	}else{
		balance=parseInt(balance);
		withdraw=parseInt(withdraw);
  balance=balance-withdraw;
  ch=window.prompt("Succesfully Withdrawn Ksh "+withdraw+"\nPress 98 to go to the Main Menu");
if(ch==98){
	mainMenu();
}else{
	do{
     ch=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
}
	}else{
	if(withdraw>balance){
      ch=window.prompt("Transaction Failed due to insuficient balance in your account\nPress 98 to go to the Main Menu");
      if(ch==98){
	mainMenu();
}else{
	do{
     withdraw=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
	}else{
		balance=parseInt(balance);
		withdraw=parseInt(withdraw);
  balance=balance-withdraw;
  ch=window.prompt("Succesfully Withdrawn Ksh "+withdraw+"\nPress 98 to go to the Main Menu");
if(ch==98){
	mainMenu();
}else{
	do{
     ch=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
}
}
}
else if(ch==3){
	deposit=window.prompt("Enter Amount you want to Deposit");
	balance=parseInt(balance);
	deposit=parseInt(deposit);
	balance=balance+deposit;
	ch=window.prompt("Succesfully Deposit Ksh "+deposit+"\nPress 98 to go to the Main Menu");
if(ch==98){
	mainMenu();
}else{
	do{
     ch=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
}
else if(ch==4){
		ch=window.prompt("Account Name/Owner: "+name+"\nOwners National ID: "+id+"\nAge: "+age+"\nBalance: Ksh "+balance+"\nPress 98 to go to the Main Menu");
	if(ch==98){
	mainMenu();
}else{
	do{
     ch=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
}
else if(ch==5){ alert("Thank you For Staying with us");
}
else{
     ch=window.prompt("Invalid Input!\nPress 98 to go to the Main Menu");
if(ch==98){
	mainMenu();
}else{
	do{
     ch=window.prompt("Invalid input!\nPress 98 to the Main Menu");
	}while(ch!=98);
	mainMenu();
}
}
}
mainMenu();

var message = document.getElementBy("message")
var button = document.getElementBy("button")
button.addEventListener("click", function(){
	localStorage.name=textbox.value;
});
document.write(localStorage.name);