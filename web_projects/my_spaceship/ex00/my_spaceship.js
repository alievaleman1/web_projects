function my_spaceship(input) {
    let x=0;
    let y=0;
    let direction=0;
    const directions=["up","right","down","left"];
    for (let i=0; i<input.length; i++) {
        let char=input[i];
        if(char==="R"){
            direction=(direction+1)%4;
        } else if(char==="L"){
            direction=(direction+3)%4;
        } else if(char==="A"){
            if(direction===0){
                     y--;
            }
            else if(direction===1){
                     x++;
            }
            else if(direction===2){
                     y++;
            }
            else{ 
                     x--;
        }
}
}
return `{x: ${x}, y: ${y}, direction: '${directions[direction]}'}`;
}