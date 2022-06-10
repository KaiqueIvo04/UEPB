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

const Postagem = sequelize.define('postagens', {
    titulo: {
        type: Sequelize.STRING
    },
    conteudo: {
        type: Sequelize.TEXT
    }
})

const Usuario = sequelize.define('usuarios', {
    nome: {
        
    }
})