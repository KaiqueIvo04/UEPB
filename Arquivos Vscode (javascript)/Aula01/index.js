//Inicializar express
const express = require("express");
const app = express();
//Criar rotas
app.get("/", function(req,res){
    res.send("Seja bem vindo kaique");
});

app.get('/rota1/:cor/:nome', function(req,res){
    res.send("<h1>ola" + req.params.nome + "</h1>");
});

app.get("/ninterk-home/:projeto",function(req,res){
    res.send("Bem vindo a página oficial da Ninterk");
});
//Abrir servidor
app.listen(1337, function(){
    console.log("Servidor aberto!")
});