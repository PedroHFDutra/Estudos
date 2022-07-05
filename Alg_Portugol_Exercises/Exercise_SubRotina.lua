/*Ideia do Algoritmo: Desenvolver um algoritmo para o estudo de funções*/

    Algoritmo: agendamentoMedico
    Procedimento cadastrar()
        Var: 
            nomePaciente : Vetor[1..200] de caractere
            nomeMae: Vetor[1..200] de caractere
            nomeBairro: Vetor[1..200] de caractere
            idade, anoNascimento, numeroCasa : inteiro
            altura, peso: real
        Inicio:
            Escreval("Digite o nome do paciente para cadastro:")
                Leia(nomePaciente)
                Escreval("Digite o nome da mãe do paciente:")
                    Leia(nomeMae)
                    Escreval("Digite o bairro de sua residência fixa:")
                        Leia(nomeBairro)
                        Escreval("Digite o número de sua residência:")
                            Leia(numeroCasa)
                            Escreval("Informe a idade do paciente:")
                                Leia(idade)
                                Escreval("Informe o ano de nascimento do paciente cadastrado:")
                                    Leia(anoNascimento)
                                    Escreval("Informe a altura do paciente:")
                                        Leia(altura)
                                        Escreval("Informe o peso do paciente:")
                                            Leia(peso)
        Fim_Procedimento
    Procedimento alergiasMedicamentosas()
        Var: 
            alergia: Vetor[1..400] de caractere 
            resposta: inteiro
        Inicio:
            Escreval("O paciente possui alguma alergia medicamentosa?")
                Escreval("Digite: 1 para SIM ou 2 para NÃO")
                    Leia(resposta)

            Se (resposta = 1) então 
                 Escreval("Informe o medicamento:")
                     Leia(alergia)
            Senão
                Escreval("O cadastro de alergias foi encerrado por inexistência.")
            Fim_Se
        Fim_Procedimento
    Var:
        respostaCadastro: inteiro                                    
    Inicio:
        
        Escreval("Seja bem-vindo ao algoritmo de agendamento médico!")
            Escreval("Para prosseguir você precisa realizar o cadastro do paciente a ser agendado")
               Escreval("Se deseja continuar com o agendamento, digite 1 para SIM ou 2 para NÃO.") 
                   Leia(respostaCadastro)
               
                   Se (resposta = 1) então
                       Escreval("Prosseguiremos o agendamento realizando o cadastro do paciente, por favor preencha as informações com atenção")
                    Fim_Se
                       Se (resposta = 2) então
                           Escreval("O algoritmo de agendamento será encerrado")
                        Fim_Se
                           Se (resposta > 2) então 
                               Escreval("Opção Inválida")
                            Fim_Se

                              cadastrar()

                                    Escreval()
                    
        

