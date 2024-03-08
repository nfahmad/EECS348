function verify() {
    var password1 = document.getElementById("password1").value;
    var password2 = document.getElementById("password2").value;


    if (password1.length < 8) {
        alert("The length of the first password is less than 8 letters!")
    } else if (password2.length < 8) {
        alert("The length of the second password is less than 8 letters!")
    } else if (password1 != password2) {
        alert("Two passwords don't match!")
    } else {
        alert("Everything is good!")
    }
}

function newColor() {
    var borderR = document.getElementById("borderR").value;
    var borderG = document.getElementById("borderG").value;
    var borderB = document.getElementById("borderB").value;
    var border_width = document.getElementById("border_width").value;
    var backgroundR = document.getElementById("backgroundR").value;
    var backgroundG = document.getElementById("backgroundG").value;
    var backgroundB = document.getElementById("backgroundB").value;

    var change  = document.getElementById("paragraph");
    change.style.borderColor = `rgb(${borderR},${borderG},${borderB})`;
    change.style.borderWidth = border_width
    change.style.backgroundColor = `rgb(${backgroundR},${backgroundG},${backgroundB})`;
}