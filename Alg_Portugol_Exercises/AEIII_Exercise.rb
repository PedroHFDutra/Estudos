Algoritmo vetorPasto
Var
	nomeUser       : Vetor [1..50] de caractere
	pasto1         : Vetor [1..42] de inteiro
	pasto2         : Vetor [1..42] de inteiro 
	gadoUser, cont : inteiro
	
Inicio
	
	Escreva("Digite seu nome:")
	Leia(nomeUser)
	Escreval("Bem vindo ao controle de pastos", nomeUser, "!")
	
		Para cont de 1 até 42 faça 
			Escreva("Informe o nº do gado para identificar o pasto correto")
			Leia(gadoUser [cont])
				Se (gadoUser[cont] MOD 2 = 0) então 
					pasto1 <- gadoUser[cont]
					Senão 
						pasto2 <-gadoUser[cont]
				Fim_Se
						Escreva("Os gados do pasto número 1 são:", pasto1)
						Escreva("Os gados do pasto número 2 são:", pasto2)

Fi
