# importa funções
from IPython.displa1y import clear_output   # "limpatela" (tipo portugol)
import time                                 # tempo

curriculos = []                             # Lista que armazenará os currículos

while True:                                 # inicia o laço de repetição até "sair"

    clear_output()                          # Limpa a tela novamente
    time.sleep(0.5)                         # Espera 0.5 segundo para evitar problemas com o clear_output

    # Abre o Menu
    print(
        '-----------MENU-----------',
        '\n1. Cadastrar currículo',
        '\n2. Listar todos os currículos',
        '\n3. Buscar currículo por nome',
        '\n4. Atualizar currículo',
        '\n5. Excluir currículo',
        '\n0. Sair',
        '\n--------------------------'
    )

    time.sleep(0.5)                         # Espera antes do "input" para evitar erros
    opcao = int(input('\nDigite a opção desejada: '))


    # ------ opção 1 - Cadastrar Currículo ------ #
    if opcao == 1:
        clear_output()                      # Limpa a tela para a seção de cadastro
        time.sleep(0.5)                     # Pequena pausa

        print('\n-----Cadastrar currículo-----') # Título da seção

        # Nome
        while True:                         # Inicia o loop que garante a existência do nome
            nome = input("Nome completo: ").strip() # Solicita o nome e remove espaços extras
            if nome:                        # Verifica se o nome não está vazio
                nome = nome.title()         # Capitaliza a primeira letra de cada nome
                break                       # Encerra o loop se o nome for válido
            else:
                print("Nome não pode ser vazio.")

        # Idade
        while True:
            idade_input = input("Idade: ").strip() # Pede a idade e remove espaços
            if idade_input.isdigit():       # Verifica se a entrada é um número inteiro
                idade = int(idade_input)
                if idade > 0:               # Verifica se a idade é maior que zero
                    break                   # Encerra o loop se a idade for válida
                else:
                    print("A idade precisa ser maior que 0.") # Mensagem se a idade não for positiva
            else:
                print("Digite apenas números inteiros para a idade.") # Mensagem se a entrada não for um número

        # Formação
        formacao = input("Formação acadêmica: ").strip() # Solicita a formação acadêmica

        # Experiências
        exp = []                            # Abre a lista que salva as experiências
        print("\nInforme pelo menos uma experiência profissional. ")
        while True:
            cargo = input("Cargo (ou digite 'fim' para encerrar): ").strip() # Solicita o cargo
            if cargo.lower() == "fim":      # Verifica se o usuário quer parar de adicionar experiências
                if len(exp) == 0:           # Garante que pelo menos uma experiência seja inserida
                    print("Você deve inserir ao menos uma experiência.")
                else:
                    break                   # Encerra o loop de experiências
            elif cargo:                     # Verifica se o cargo não está vazio
                empresa = input("Empresa: ").strip() # Solicita a empresa
                exp.append(f"{cargo} na {empresa}") # Adiciona a experiência na lista
            else:
                print("Cargo não pode ser vazio.")

        # Habilidades
        habilidades = []                    # Abre a lista que salva as habilidades
        print("\nAdicione habilidades (Enter para encerrar).")
        while True:
            hab = input("Habilidade: ").strip() # Solicita uma habilidade
            if hab == "":                   # Verifica se o usuário pressionou Enter para encerrar
                break
            habilidades.append(hab)         # Adiciona a habilidade na lista

        # Intera informações e "salva" o currículo
        curriculo = [nome, idade, formacao, exp, habilidades] # Cria uma lista com os dados do currículo
        curriculos.append(curriculo)         # Adiciona o currículo à lista de currículos

        print("Currículo cadastrado com sucesso!") # Mensagem de confirmação
        time.sleep(2)                       # Espera por 2 segundos



    # ------ opção 2 - Listar Currículos ------ #
    elif opcao == 2:
        clear_output()                      # Limpa a tela
        time.sleep(0.5)                     # Pequena pausa

        print('\n-----Listar Currículos-----') # Título da seção
        if len(curriculos) == 0:           # Verifica se há currículos cadastrados
            print("Nenhum currículo cadastrado.")
        else:
            for i, c in enumerate(curriculos): # Itera sobre a lista de currículos com índice
                print(f"\nÍndice: {i}")
                print(f"Nome: {c[0]}")
                print(f"Idade: {c[1]}")
                print(f"Formação: {c[2]}")
                print("Experiência:")
                for e in c[3]:              # Itera sobre a lista de experiências do currículo
                    print(f"  - {e}")
                print("Habilidades:")
                for h in c[4]:              # Itera sobre a lista de habilidades do currículo
                    print(f"  - {h}")

        time.sleep(0.5)                     # Pequena pausa
        input("\nPressione Enter para voltar ao menu") # Aguarda o usuário pressionar Enter




    # ------ opção 3 - Buscar Currículo por nome ------ #
    elif opcao == 3:
        clear_output()                      # Limpa a tela
        time.sleep(0.5)                     # Pequena pausa

        print('\n----- Buscar Currículo por nome -----') # Título da seção
        pesquisa = input("Digite o nome ou parte do nome: ").lower() # Solicita o nome para busca e converte para minúsculo
        encontrados = 0                     # Contador de currículos encontrados
        for i, c in enumerate(curriculos): # Itera sobre a lista de currículos
            if pesquisa in c[0].lower():    # Verifica se a string de pesquisa está no nome (em minúsculo)
                print(f"\nÍndice: {i}")     # Exibe o índice do currículo encontrado
                print(f"Nome: {c[0]}")
                print(f"Idade: {c[1]}")
                print(f"Formação: {c[2]}")
                print("Experiência:")
                for e in c[3]:              # Itera sobre as experiências
                    print(f"  - {e}")
                print("Habilidades:")
                for h in c[4]:              # Itera sobre as habilidades
                    print(f"  - {h}")
                encontrados += 1            # Incrementa o contador de encontrados
        if encontrados == 0:                # Se nenhum currículo for encontrado
            print("Nenhum currículo encontrado.")

        input("\nPressione Enter para voltar ao menu") # Aguarda o usuário pressionar Enter




    # ------ opção 4 - Atualizar Currículo ------ #
    elif opcao == 4:
        clear_output()                      # Limpa a tela
        time.sleep(0.5)                     # Pequena pausa

        print('\n----- Atualizar currículo -----') # Título da seção
        indice = int(input("Digite o índice do currículo que deseja atualizar: ")) # Solicita o índice para atualização
        if 0 <= indice < len(curriculos):   # Verifica se o índice é válido
            print("Deixe em branco para manter o valor atual.")
            novo_nome = input(f"Nome atual: {curriculos[indice][0]} > ") or curriculos[indice][0] # Permite manter o nome atual se Enter for pressionado
            nova_idade_str = input(f"Idade atual: {curriculos[indice][1]} > ")
            nova_idade = int(nova_idade_str) if nova_idade_str else curriculos[indice][1] # Permite manter a idade atual
            nova_formacao = input(f"Formação atual: {curriculos[indice][2]} > ") or curriculos[indice][2] # Permite manter a formação atual

            print("Atualizar experiência (s/n)?")
            if input().lower() == 's':
                nova_exp = []
                while True:
                    cargo = input("Cargo (ou ENTER para sair): ")
                    if cargo == "":
                        break
                    empresa = input("Empresa: ")
                    nova_exp.append(f"{cargo} na {empresa}")
            else:
                nova_exp = curriculos[indice][3] # Mantém a lista de experiências atual

            print("Atualizar habilidades (s/n)?")
            if input().lower() == 's':
                novas_hab = []
                while True:
                    hab = input("Habilidade (ou ENTER para sair): ")
                    if hab == "":
                        break
                    novas_hab.append(hab)
            else:
                novas_hab = curriculos[indice][4] # Mantém a lista de habilidades atual

            curriculos[indice] = [novo_nome, nova_idade, nova_formacao, nova_exp, novas_hab] # Atualiza o currículo na lista
            print("Currículo atualizado com sucesso.")
        else:
            print("Índice inválido.")
        time.sleep(2)



    # ------ opção 5 - Excluir Currículo ------ #
    elif opcao == 5:
        clear_output()                      # Limpa a tela
        time.sleep(0.5)                     # Pequena pausa

        print('\n----- Excluir currículo -----') # Título da seção

        indice = int(input("Digite o índice do currículo a excluir: ")) # Solicita o índice para exclusão
        if 0 <= indice < len(curriculos):   # Verifica se o índice é válido
            del curriculos[indice]          # Remove o currículo da lista
            print("Currículo excluído com sucesso.")
        else:                               # Se o índice não for válido
            print("Índice inválido.")
        time.sleep(2)



    # ------ opção 0 - Sair ------ #
    elif opcao == 0:
        print("Encerrando o sistema...")
        time.sleep(1)
        clear_output()
        break                               # Sai do loop principal (encerra o programa)


    # Opção inválida
    else:
        print("Opção inválida. Digite um número de 0 a 5.")
        time.sleep(1)