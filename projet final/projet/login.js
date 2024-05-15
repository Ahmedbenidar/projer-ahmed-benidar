
var users = [{ username:'ahmed', password:'ahmed12' },
             { username:'imad', password:'imad12' } ]
    

function ShowPass(){

        var passInput = document.getElementById('passlog');

        if(passInput.type == 'password'){
            passInput.type = 'text'
        }else if(passInput.type == 'text'){
            passInput.type = 'password'
        }
}

function login(){

    var userValue = document.getElementById('userlog').value;
    var passValue = document.getElementById('passlog').value;
    
    if(userValue == ''){
        document.getElementById('logfeedback').innerHTML = 'Username must be filled out';
        return false;
    }
    else if(passValue == ''){
        document.getElementById('logfeedback').innerHTML = 'Password name must be filled out'
        return false;
    }
    
    for(var i=0; i<users.length;i++){
    
        if(userValue == users[i].username && passValue == users[i].password){
            return true;
        }
    }
    document.getElementById('logfeedback').innerHTML = 'Username and password do not match';
            return false;
    }
    

    
 const divcontent=document.querySelector('#logform');
 const div1content=document.querySelector('#signform');
let click=true;
 let hide = function hide(){
   if(click){
    divcontent.style.display='none';
    div1content.style.display='block'
    click=false;
   }else{
    div1content.style.display='none'
    divcontent.style.display='block';
    click=true;
   }
 
    
 }













