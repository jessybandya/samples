var header=document.getElementById("header");
header.innerHTML="<h1>Jaby Boy</h1>";
header.style="color: red";
var link=document.getElementById("link");
link.style="color: blue";
function button(){
	alert("You have Successfully Submitted");
}
var img=document.getElementById("img");
img.addEventListener("mouseover",function(){
	this.style="box-shadow: 2px 2px 2px blue";
	this.width=150;
	img.addEventListener("mouseout",function(){
		this.style="";
		this.width=100;
	})
});
var messages=document.getElementById("messages");
var textbox=document.getElementById("textbox");
var button=document.getElementById("button");
button.addEventListener("click", function(){
	var newMessages=document.createElement("li");
	newMessages.innerHTML=textbox.value;
	messages.appendChild(newMessages);
	textbox.value="";
});
	