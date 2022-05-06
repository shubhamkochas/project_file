const express = require("express");
const bodyParser = require("body-parser");

const app =  express();
app.use(bodyParser.urlencoded({extended: true}));

app.get('/' , function(req , res){

   res.sendFile(__dirname + "/index.html");

});

app.post('/' , function(req , res){

   var num1 = Number(req.body.num1);
   var num2 = Number(req.body.num2);
   var result = num1 + num2;

   res.send("your answer is: "+result);

});

app.get('/bmiCalculator' , function(req , res){
   
   res.sendFile(__dirname +'/bmiCalculator.html');

});

app.post('/bmiCalculator' , function(req , res){

   var Weight = parseFloat(req.body.Weight);
   var Height = parseFloat(req.body.Height);

   var BMI = Weight /(Height * Height);
   
   res.send('your BMI is: '+ BMI);

});

app.listen(3000, function(){

    console.log("server is running on port 3000");

});
