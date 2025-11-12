# **Guia Completo: Instalando o GCC no Linux e macOS e Integrando ao VS Code**
> **Objetivo:** Este guia ajudará você a instalar o GCC (GNU Compiler Collection) no sistema operacional, entender sua importância, testar sua instalação e configurar um ambiente de desenvolvimento no **Visual Studio Code**.

## **Índice**
1. O que é o GCC?
2. Métodos de instalação do GCC no **Linux**
   - Método 1: Instalando via gerenciador de pacotes (Ubuntu, Debian, Fedora, Arch)
   - Método 2: Compilando o GCC do código-fonte  
3. Métodos de instalação do GCC no **macOS**
   - Método 1: Instalando via Homebrew  
   - Método 2: Instalando via Xcode Command Line Tools  
4. Testando a instalação  
5. **Configurando o Visual Studio Code**
6. Curiosidades sobre o GCC  
7. Dicas avançadas  

---

## **1. O que é o GCC?**
O **GCC (GNU Compiler Collection)** é um conjunto de compiladores criado pelo projeto GNU para diversas linguagens, incluindo **C, C++, Objective-C, Fortran, Ada, Go e mais**. O GCC é amplamente usado na comunidade open-source e é a base para a construção de muitos softwares e sistemas operacionais.

📌 **Curiosidade:** O GCC foi lançado em 1987 por **Richard Stallman** e, desde então, se tornou um dos compiladores mais populares do mundo. Ele é usado para compilar o próprio **Linux Kernel** e muitos softwares Unix-like.

---

## **2. Instalando o GCC no Linux**
### **🔹 Método 1: Instalando via Gerenciador de Pacotes**
A forma mais fácil de instalar o GCC no Linux é usando o gerenciador de pacotes da sua distribuição.

#### **📌 Ubuntu / Debian**
1. **Atualize os repositórios do sistema:**
   ```sh
   sudo apt update && sudo apt upgrade -y
   ```
2. **Instale o GCC e Make:**
   ```sh
   sudo apt install build-essential gdb -y
   ```
   📌 O pacote `build-essential` contém o GCC, `g++`, `make` e outras ferramentas importantes.

3. **Verifique a instalação:**
   ```sh
   gcc --version
   ```
   Você verá algo como:
   ```
   gcc (Ubuntu 11.3.0-1ubuntu1) 11.3.0
   ```

#### **📌 Fedora**
1. **Atualize o sistema:**
   ```sh
   sudo dnf update -y
   ```
2. **Instale o GCC e Make:**
   ```sh
   sudo dnf install gcc gcc-c++ make gdb -y
   ```

#### **📌 Arch Linux / Manjaro**
1. **Atualize os pacotes do sistema:**
   ```sh
   sudo pacman -Syu
   ```
2. **Instale o GCC:**
   ```sh
   sudo pacman -S base-devel
   ```

---

### **🔹 Método 2: Compilando o GCC do Código-Fonte**
Se quiser a **versão mais recente do GCC**, você pode compilá-lo manualmente. Isso também permite personalizar sua configuração.

1. **Instale dependências:**
   ```sh
   sudo apt install build-essential manpages-dev flex bison -y
   ```

2. **Baixe o código-fonte mais recente:**
   ```sh
   wget http://ftp.gnu.org/gnu/gcc/gcc-13.2.0/gcc-13.2.0.tar.gz
   ```

3. **Extraia o arquivo:**
   ```sh
   tar -xvzf gcc-13.2.0.tar.gz
   cd gcc-13.2.0
   ```

4. **Baixe as dependências adicionais do GCC:**
   ```sh
   ./contrib/download_prerequisites
   ```

5. **Crie um diretório de build e compile:**
   ```sh
   mkdir build && cd build
   ../configure --enable-languages=c,c++ --disable-multilib
   make -j$(nproc)
   sudo make install
   ```

6. **Verifique a versão instalada:**
   ```sh
   gcc --version
   ```

📌 **Curiosidade:** Compilar o GCC pode levar **de 20 minutos a várias horas**, dependendo do seu processador.

---

## **3. Instalando o GCC no macOS**
No **macOS**, você pode instalar o GCC de duas formas.

### **🔹 Método 1: Instalando via Homebrew**
1. **Instale o Homebrew (caso não tenha):**
   ```sh
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```

2. **Instale o GCC:**
   ```sh
   brew install gcc
   ```

3. **Verifique a instalação:**
   ```sh
   gcc --version
   ```

### **🔹 Método 2: Instalando via Xcode Command Line Tools**
1. **Instale as ferramentas de linha de comando do Xcode:**
   ```sh
   xcode-select --install
   ```
2. **Confirme a instalação:**
   ```sh
   gcc --version
   ```

---

## **4. Testando a Instalação**
Crie um arquivo **`hello.c`**:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Compile e execute:
```sh
gcc hello.c -o hello
./hello
```

Se tudo estiver certo, o terminal imprimirá:
```
Hello, World!
```
---

## 5. **Guia Completo: Configurando o VS Code para Projetos C com GCC e GDB**

### **5.1. Configurando o Visual Studio Code para C**
Agora que temos o **GCC e GDB instalados**, vamos configurar o **VS Code**.

#### **🔹 Instalando as Extensões**
1. Abra o **VS Code**.
2. Acesse a aba de **Extensões** (`Ctrl + Shift + X`).
3. Instale as seguintes extensões:
   - **C/C++** (Microsoft)
   - **Code Runner** (opcional)
   - **CMake Tools** (caso utilize CMake)

---

### **5.2. Criando um Projeto C no VS Code**
1. **Crie uma pasta para o projeto**
   ```sh
   mkdir MeuProjetoC
   cd MeuProjetoC
   ```

2. **Crie um arquivo C**
   ```sh
   touch main.c
   ```

3. **Edite `main.c` no VS Code**
   - Abra a pasta no VS Code (`File > Open Folder`).
   - Edite `main.c` e adicione o código:
     ```c
     #include <stdio.h>

     int main() {
         printf("Hello, World!\n");
         return 0;
     }
     ```

---

### **5.3. Configurando o Compilador no VS Code**
1. **Crie a pasta `.vscode` dentro do projeto**
   ```sh
   mkdir .vscode
   ```

2. **Crie o arquivo `tasks.json`**
   - No VS Code, vá em `Terminal > Configure Tasks`.
   - Escolha **"Create tasks.json file"** e edite para:
     ```json
     {
         "version": "2.0.0",
         "tasks": [
             {
                 "label": "Compilar C",
                 "type": "shell",
                 "command": "gcc",
                 "args": ["-g", "main.c", "-o", "main"],
                 "group": {
                     "kind": "build",
                     "isDefault": true
                 }
             }
         ]
     }
     ```

---

### **5.4. Configurando o Depurador (GDB) no VS Code**
1. **Crie o arquivo `launch.json`**
   - No VS Code, vá em `Executar > Adicionar Configuração > C++ (GDB/LLDB)`.
   - Edite o arquivo `.vscode/launch.json` para:
     ```json
     {
         "version": "0.2.0",
         "configurations": [
             {
                 "name": "Depurar C",
                 "type": "cppdbg",
                 "request": "launch",
                 "program": "${workspaceFolder}/main",
                 "args": [],
                 "stopAtEntry": false,
                 "cwd": "${workspaceFolder}",
                 "environment": [],
                 "externalConsole": false,
                 "MIMode": "gdb",
                 "setupCommands": [
                     {
                         "description": "Habilitar formatação de impressão",
                         "text": "-enable-pretty-printing",
                         "ignoreFailures": true
                     }
                 ]
             }
         ]
     }
     ```

---

### **5.5. Testando a Configuração**
1. **Compile o programa**
   - Pressione `Ctrl + Shift + B` ou:
     ```sh
     gcc -g main.c -o main
     ```

2. **Execute o programa**
   ```sh
   ./main
   ```

3. **Depure o código**
   - Pressione `F5` no VS Code.
   - Adicione um **breakpoint** clicando na margem ao lado de uma linha.
   - Execute o depurador e veja a execução passo a passo.

---

### **5.6. Solução de Problemas**
- **Erro "gcc not found"** → Adicione o GCC ao PATH.
- **Erro "gdb not found"** → Certifique-se de que o GDB está instalado corretamente.
- **Erro "cannot access 'main'"** → Confirme que o programa foi compilado (`gcc -g main.c -o main`).

---

## **6. Curiosidades sobre o GCC**
- O **GCC é um compilador de código aberto**, mas também pode ser usado para criar **softwares proprietários**.
- O **Linux Kernel e o Git** foram escritos em C e compilados com GCC.
- O **Clang** é um compilador alternativo ao GCC, desenvolvido pela **Apple** e adotado no macOS.

---

## **7. Dicas Avançadas**
- Para compilar com **otimizações**, use:
  ```sh
  gcc -O2 programa.c -o programa
  ```
- Para depurar com `gdb`:
  ```sh
  gcc -g programa.c -o programa
  gdb ./programa
  ```

---

## **Conclusão**
Agora que temos o **GCCe o GDB instalado e configurado no VS Code**! Isso permitirá que programemos em C de maneira eficiente. 

Vamos então compreender a estrutura básica de um programa c para isto [clique aqui!](./CompreendendoEstruturaBasica/readme.md)