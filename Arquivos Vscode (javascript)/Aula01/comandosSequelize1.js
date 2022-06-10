//Inicializar sequelize
const Sequelize = require("sequelize");
const sequelize = new Sequelize('test', 'root', '124578', {
    host:"localhost",
    dialect:'mysql' 
});
//Verificar se deu certo a conexão
sequelize.authenticate().then(function(){
    console.log("Sucesso ao conectar!");
}).catch(function(erro){
    console.log("Erro ao conectar: "+ erro);
})
//Criar tabela
const Postagem = sequelize.define('postagens', {
    titulo: {
        type: Sequelize.STRING
    },
    conteudo: {
        type: Sequelize.TEXT
    }
})
//Criar istancia na tabela
Postagem.create({
    titulo: "copa do mundo",
    conteudo: "bagaca"
})
//Criar tabela
const Usuario = sequelize.define('usuarios', {
    nome: {
        type: Sequelize.STRING
    },
    sobrenome: {
        type: Sequelize.STRING
    },
    idade: {
        type: Sequelize.INTEGER
    },
    email: {
        type: Sequelize.STRING
    }
})
//Criar instancia na tabela
Usuario.create({
    nome: "KaiquinHs",
    sobrenome: "Ivo",
    idade: 18,
    email: "kaique.ivo@uepb.com"
})