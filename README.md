# 📝 Envasadora Automática

<br />

No ano de 2018 realizei meu primeiro projeto de tcc do curso técnico de eletrônica na qual fiquei responsável pela programação do projeto e montagem do mesmo.

O projeto consistia em criar uma envasadora automática de garrafas, na qual por meio de um motor instalado no bico injetor seria possível ser feito o envase de garrafas de tamanhos diferentes, foram utilizados vários componentes eletrônicos [^2], mas o mais importante, o cérebro do projeto o arduino uno.

A programação foi feita em C++ para arduino, ligeiramente simples porém funcional.

Na época reconhecíamos que muitas coisas poderiam ser melhoradas no projeto, tais como materiais melhores e componentes mais precisos, porém mesmo assim este projeto me ajudou e muito a saber como é trabalhar sob pressão, cumprindo prazos, trabalhar em equipe como também se preocupar na qualidade do código, escrevendo-o de uma forma limpa, funcional e fácil de entender.

Segue abaixo imagens do fluxograma, diagrama dos circuitos elétricos feitos no programa Proteus como também um vídeo do projeto já finalizado e funcionando.

<br />

## Project Working ⚙️

<br />

https://github.com/alvarodayle/Automatic_Filler/assets/116722232/72ddafa9-a95a-42b1-8ed8-d9ec83b709f8

<br />

**Funcionamento:** Uma garrafa vazia é colocada para ser envasada, a garrafa passa pelos sensores principais que vão identificar o tamanho da mesma, ao chegar no último sensor responsável por parar a esteira a garrafa é posicionada logo abaixo do bico injetor para iniciar o processo de envase do líquido, conforme já identificado o respectivo tamanho o bico injetor irá descer até a posição correta e a bomba de líquido permanecerá aberta (enchendo a garrafa) durante um tempo pré definido, após isso a garrafa já recebeu o líquido e seguiria até o processo final para ser embalada.

<br />

## Flowchart 📃

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/f87d7d5c-45ca-4b56-b994-42c2297e6583" width="650px" height="500px" > 
</div>

<br />

## Electrical Circuit Diagrams 💡

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/4b328c1e-e046-48ef-bfe9-17057950ef25.png" width="650px" height="420" >
</div>

**Project Overview**

<br />
<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/c9e35ef1-c54e-43d8-81f4-2732ff4c7fb6.png" width="650px" height="350" >
</div>

**Voltage Regulator Board**

<br />
<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/78ac4e3e-b0b1-4bfc-97f5-0a65fe4c3bb4.png" width="650px" height="420" >
</div>

**Motor DC Controller Board**

<br />

## Timeline ⌛

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/6ca365d5-d710-464f-9c77-0957fec383a7.png" width="650px" height="420" >
</div>

<br />

[^2]: Motor de corrente contínua, sensores infravermelhos, motores de passo, bomba de água, componentes responsáveis pelo funcionamento dos circuitos elétricos tais como relês, transistores, reguladores de tensão e fontes de alimentação.
