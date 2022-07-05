Algoritmo cadastroPaciente
    Procedimento cadastrar ()
        Var
            nomePaciente, nomeMae : Vetor[1..200] de caractere
            idade, anoNascimento : inteiro
        Início
            Escreval("Digite o nome do paciente para cadastro:")
            Leia(nomePaciente)
            Escreval("Digite o nome da mãe do paciente cadastrado:")
            Leia(nomeMae)
            Escreval("Digite a idade do paciente cadastrado:")
            Leia(idade)
            Escreval("Digite o ano de nascimento do paciente cadastrado:")
            Leia(anoNascimento)
        Fim_Procedimento 
Var
    sim, nao : inteiro
Início 

    sim <- 1
    nao <- 2

    cadastrar()
    
    Escreval("Deseja finalizar o cadastro?")
    Escreval("Digite 1 para SIM ou 2 para NÃO)
    Leia(sim)
    Leia(nao)

        Se (sim = 1) então 
            Escreval("O paciente foi cadastrado com sucesso!") 
            Senão
                Escreval("O cadastro não foi finalizado")
            Fim_Se
        
Fim