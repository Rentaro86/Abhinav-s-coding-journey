alert("This page will use your name and marks to calculate your percentage");

var name = prompt("Please Enter your name");
var marks = prompt("Please Enter your marks out of two hundered");

var m = Number(marks);
if (isNaN(m)) {
    alert("Please Enter a number ");
}
else if (m > 200 || m < 0) {
    alert("Marks should be between 0 and 200!");
}
else {
var percent = (m/200)*100;

console.log("This is for the developer to show the use of console");
console.log("this is name of person " + name);
console.log("this is marks of the person " + marks);
console.log("percentage of the makrs scored is " + percent);

document.write("<h3>Hi "+ name +" your marks is " + marks + "</h3><br>");
document.write("<h3>After calculation your percentage is " + percent)+ "</h3>";
}