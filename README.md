# 📝 Automatic Filler

In 2018, I completed my first final course project for the electronics technical course, where I was responsible for programming and assembling the electronics.

The project aimed to create an automatic bottle filler, incorporating a motor installed in the injector nozzle, enabling the filling of bottles of various sizes. Several electronic components were utilized [^1], but the core of the project was the Arduino Uno.

The programming was done in C++ for Arduino, simple yet functional.

At the time, we acknowledged that many aspects could be improved, such as using better materials and more precise components. Nonetheless, this project was extremely beneficial, teaching me how to work under pressure, meet deadlines, collaborate in a team, and prioritize code quality, ensuring it was clean, functional, and easy to understand.

Below, you'll find images of the flowchart, block diagram, and electrical circuits designed using the Proteus program, along with a video showcasing the completed and fully operational project.

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

**Operation:** An empty bottle is placed to be filled. The bottle passes through the main sensors that will identify its size. When it reaches the last sensor, responsible for stopping the conveyor belt, the bottle is positioned just below the injector nozzle to begin the liquid filling process. Once the respective size has been identified, the injector nozzle will descend to the correct position, and the liquid pump will remain open (filling the bottle) for a predefined period. Afterward, the bottle has received the liquid and continues to the final process for packaging.

**Funcionamento:** Uma garrafa vazia é colocada para ser envasada, a garrafa passa pelos sensores principais que vão identificar o tamanho da mesma, ao chegar no último sensor responsável por parar a esteira a garrafa é posicionada logo abaixo do bico injetor para iniciar o processo de envase do líquido, conforme já identificado o respectivo tamanho o bico injetor irá descer até a posição correta e a bomba de líquido permanecerá aberta (enchendo a garrafa) durante um tempo pré definido, após isso a garrafa já recebeu o líquido e seguiria até o processo final para ser embalada.

<br />

## Flowchart 📃

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/f87d7d5c-45ca-4b56-b994-42c2297e6583" width="80%" height="80%" > 
</div>

<br />

## Electrical Circuit Diagrams 💡

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/4b328c1e-e046-48ef-bfe9-17057950ef25.png" width="80%" height="80%" >
</div>

**Project Overview**

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/c9e35ef1-c54e-43d8-81f4-2732ff4c7fb6.png" width="80%" height="80%" >
</div>

**Voltage Regulator Board**

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/78ac4e3e-b0b1-4bfc-97f5-0a65fe4c3bb4.png" width="80%" height="80%" >
</div>

**Motor DC Controller Board**

<br />

## Timeline ⌛

<br />

<div>
  <img src="https://github.com/alvarodayle/Automatic_Filler/assets/116722232/6ca365d5-d710-464f-9c77-0957fec383a7.png" width="80%" height="80%" >
</div>

<br />

[^1]:Direct current motor, infrared sensors, stepper motors, water pump, components responsible for the operation of electrical circuits such as relays, transistors, voltage regulators and power supplies.

[^2]: Motor de corrente contínua, sensores infravermelhos, motores de passo, bomba de água, componentes responsáveis pelo funcionamento dos circuitos elétricos tais como relês, transistores, reguladores de tensão e fontes de alimentação.
